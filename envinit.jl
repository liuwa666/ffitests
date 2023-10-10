cd(joinpath(@__DIR__, ".."))
pwd()

using PkgServerClient
PkgServerClient.registry_response_time()
PkgServerClient.set_mirror()
PkgServerClient.get_fasted_mirror()


using Pkg
Pkg.activate(".")
Pkg.status()
