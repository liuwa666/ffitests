#!/usr/bin/env julia
using Libdl

libname = "ffitests"
if !Sys.iswindows()
    libname = "lib$(libname)"
end

libtest = Libdl.dlopen(joinpath(@__FILE__, "..", "..", "target", "debug", libname))


addition_sym = Libdl.dlsym(libtest, :addition)

addition(a, b) = ccall(
    addition_sym,
    UInt32, (UInt32, UInt32), 
    a, b)

println(addition(1, 2))


howmanycharacters_sym = Libdl.dlsym(libtest, :how_many_characters)
howmanycharacters(s:: AbstractString) = ccall(
    howmanycharacters_sym,
    UInt32, (Cstring,),
    s)

println(howmanycharacters("julia调用rust"))


themesonggenerator_sym = Libdl.dlsym(libtest, :theme_song_generate)
themesongfree_sym = Libdl.dlsym(libtest, :theme_song_free)

function generatethemesong(n::Int)
    s = ccall(
        themesonggenerator_sym,
        Cstring, (UInt8,),
        n)
    out = unsafe_string(s)
    ccall(
        themesongfree_sym,
        Cvoid, (Cstring,),
        s
    )
    out
end

song = generatethemesong(5)
println(song)



sumofeven_sym = Libdl.dlsym(libtest, :sum_of_even)

sumofeven(a:: Array{UInt32}) = ccall(
    sumofeven_sym,
    UInt32,
    (Ptr{UInt32}, Csize_t),
    a,
    length(a))

println(sumofeven(UInt32[1, 2, 3, 4, 5, 6]))



flipthingsaround_sym = Libdl.dlsym(libtest, :flip_things_around)

struct Tuple
    x::UInt32
    y::UInt32
end

flipthingsaround(t:: Tuple) = ccall(
    flipthingsaround_sym,
    Tuple, (Tuple,),
    t)

initial = Tuple(10, 20)
newtuple = flipthingsaround(initial)
println("($(newtuple.x),$(newtuple.y))")



zipcodedatabase_new_sym = Libdl.dlsym(libtest, :zip_code_database_new)
zipcodedatabase_free_sym = Libdl.dlsym(libtest, :zip_code_database_free)
zipcodedatabase_populate_sym = Libdl.dlsym(libtest, :zip_code_database_populate)
zipcodedatabase_populationof_sym = Libdl.dlsym(libtest, :zip_code_database_population_of)

struct ZipCodeDatabase
    handle::Ptr{Nothing}

    function ZipCodeDatabase()
        handle = ccall(zipcodedatabase_new_sym, Ptr{Cvoid}, ())
        new(handle)
    end

    function ZipCodeDatabase(f::Function)
        database = ZipCodeDatabase()
        out = f(database)
        close(database)
        out
    end
end

close(database:: ZipCodeDatabase) = ccall(
    zipcodedatabase_free_sym,
    Cvoid, (Ptr{Cvoid},),
    database.handle
)

populate!(database:: ZipCodeDatabase) = ccall(
    zipcodedatabase_populate_sym,
    Cvoid, (Ptr{Cvoid},),
    database.handle
)

populationof(database:: ZipCodeDatabase, zipcode:: AbstractString) = ccall(
    zipcodedatabase_populationof_sym,
    UInt32, (Ptr{Cvoid}, Cstring),
    database.handle, zipcode
)

ZipCodeDatabase() do database
    populate!(database)
    pop1 = populationof(database, "90210")
    pop2 = populationof(database, "20500")
    println(pop1 - pop2)
end


dlclose(libtest)