#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

constexpr static const double JI_ZU_QI_DONG_TA = 6000.0;

constexpr static const double JI_ZU_QI_DONG_TB = 11000;

constexpr static const double DIAN_YA_ZAO_SHENG_XIANG_DUI_FU_ZHI = 0.05;

constexpr static const double PIN_LV_ZAO_SHENG_XIANG_DUI_FU_ZHI = 0.01;

constexpr static const double JI_ZU_E_DING_DIAN_YA = 395.0;

constexpr static const double JI_ZU_E_DING_PIN_LV = 50.0;

constexpr static const double JI_ZU_E_DING_GONG_LV = 1600.0;

constexpr static const double JI_ZU_E_DING_WU_GONG_GONG_LV = 1200.0;

constexpr static const double JI_ZU_E_DING_DIAN_LIU = 2886.75;

constexpr static const double JI_ZU_E_DING_ZHUAN_SU = 1500.0;

constexpr static const double JI_ZU_QI_DONG_SHENG_YU_DIAN_YA = 15.0;

constexpr static const double JI_ZU_SHU_CHU_GONG_LV_YIN_SHU = 0.80;

constexpr static const double JI_ZU_P_FACTOR = JI_ZU_SHU_CHU_GONG_LV_YIN_SHU;

constexpr static const double JI_ZU_Q_FACTOR = 0.6;

constexpr static const double JI_ZU_Q_P = 0.75;

constexpr static const double JI_ZU_JIE_LIE_GONG_LV_YU_ZHI = (0.1 * JI_ZU_E_DING_GONG_LV);

constexpr static const double GONG_LV_YIN_SHU_ZAO_SHENG_XIANG_DUI_FU_ZHI = 0.05;

constexpr static const double JI_ZU_TING_JI_T = 7000.0;

constexpr static const double JI_ZU_JIE_LIE_HOU_BIAN_ZAI_T = 200.0;

constexpr static const double JI_ZU_BIAN_ZAI_T = 3000.0;

constexpr static const double JI_ZU_ZHUAN_SU_BIAN_HUA_LV = 0.5;

constexpr static const double JI_ZU_DIAN_YA_BIAN_HUA_LV = 1.0;

constexpr static const double JI_ZU_CHAI_YOU_BEI_CHE_T = 12000.0;

constexpr static const double JI_ZU_QI_LUN_BEI_CHE_T = 30000.0;

constexpr static const double JI_ZU_SHOU_DONG_BING_CHE_JIAN_XI_T = 5000.0;

constexpr static const double JI_ZU_SHOU_DONG_BING_CHE_PIN_LV_SHANG_XIAN = 50.25;

constexpr static const double JI_ZU_SHOU_DONG_BING_CHE_PIN_LV_XIA_XIAN = 50.15;

constexpr static const double DIAN_YA_BIAN_HUA_LV_XI_SHU = 0.05;

constexpr static const double JI_ZU_PIN_LV_BIAN_HUA_YU_ZHI_WEN_TAI = 0.25;

constexpr static const double JI_ZU_BING_CHE_PIN_LV_DELTA = 0.1;

constexpr static const double JI_ZU_ZHUAN_SU_BIAN_HUA_YU_ZHI_WEN_TAI = 7.5;

constexpr static const double JI_ZU_DIAN_YA_WEN_TAI_ZUI_XIAO_YU_ZHI = 378.0;

constexpr static const double JI_ZU_DIAN_YA_WEN_TAI_ZUI_DA_YU_ZHI = 400.0;

constexpr static const double JI_ZU_DIAN_YA_WEN_TAI_YA_BIAN_ZHI = -17.0;

constexpr static const double JI_ZU_ZHUAN_SU_ZENG_LIANG_DAN_CI_ZHI_LING = 0.1;

constexpr static const double JI_ZU_DIAN_YA_ZENG_LIANG_DAN_CI_ZHI_LING = 0.1;

constexpr static const double V_NOISE_AMPLITUDE = DIAN_YA_ZAO_SHENG_XIANG_DUI_FU_ZHI;

constexpr static const double F_NOISE_AMPLITUDE = PIN_LV_ZAO_SHENG_XIANG_DUI_FU_ZHI;

constexpr static const double GEN_START_T1 = JI_ZU_QI_DONG_TA;

constexpr static const double GEN_START_T2 = JI_ZU_QI_DONG_TB;

constexpr static const double GEN_V_E_DING = JI_ZU_E_DING_DIAN_YA;

constexpr static const double GEN_F_E_DING = JI_ZU_E_DING_PIN_LV;

constexpr static const double GEN_V_START_REMAINDER = JI_ZU_QI_DONG_SHENG_YU_DIAN_YA;

constexpr static const double HAI_SHUI_YA_LI_CHAI_YOU_ZHENG_CHANG = 0.29;

constexpr static const double HUA_YOU_WEN_DU_CHAI_YOU_ZHENG_CHANG = 75.0;

constexpr static const double HUA_YOU_YA_LI_CHAI_YOU_ZHENG_CHANG = 0.49;

constexpr static const double JI_YOU_WEN_DU_CHAI_YOU_ZHENG_CHANG = 70.0;

constexpr static const double JI_YOU_YA_LI_CHAI_YOU_ZHENG_CHANG = 0.8;

constexpr static const double LENG_QUE_SHUI_WEN_DU_CHAI_YOU_ZHENG_CHANG = 73.0;

constexpr static const double PAI_QI_WEN_DU_CHAI_YOU_ZHENG_CHANG = 300.0;

constexpr static const double QI_DONG_KONG_QI_YA_LI_CHAI_YOU_ZHENG_CHANG = 2.5;

constexpr static const double QU_ZHOU_XIANG_YA_LI_CHAI_YOU_ZHENG_CHANG = 1.0;

constexpr static const double RAN_YOU_YA_LI_CHAI_YOU_ZHENG_CHANG = 1.0;

constexpr static const double RAO_ZU_WEN_DU_CHAI_YOU_ZHENG_CHANG = 80.0;

constexpr static const double ZENG_YA_KONG_QI_WEN_DU_CHAI_YOU_ZHENG_CHANG = 50.0;

constexpr static const double ZHOU_CHENG_HUA_YOU_LIU_LIANG_CHAI_YOU_ZHENG_CHANG = 12.0;

constexpr static const double ZHOU_CHENG_WEN_DU_CHAI_YOU_ZHENG_CHANG = 40.0;

constexpr static const double ZHOU_CHENG_YU_GONG_HUA_YOU_LIU_LIANG_CHAI_YOU_ZHENG_CHANG = 9.0;

constexpr static const double ZHUAN_SU_CHAI_YOU_ZHENG_CHANG = JI_ZU_E_DING_ZHUAN_SU;

constexpr static const double JIN_FENG_WEN_DU_CHAI_YOU_ZHENG_CHANG = 50.0;

constexpr static const double CHU_FENG_WEN_DU_CHAI_YOU_ZHENG_CHANG = PAI_QI_WEN_DU_CHAI_YOU_ZHENG_CHANG;

constexpr static const double DAN_SHUI_YA_LI_CHAI_YOU_ZHENG_CHANG = 0.21;

constexpr static const double ZHAO_NEI_KONG_QI_WEN_DU_CHAI_YOU_ZHENG_CHANG = 50.0;

constexpr static const double WEN_DU_CHANG_WEN = 25.0;

constexpr static const double DA_QI_YA_LI = 1.0;

constexpr static const double DIAN_WANG_DIAN_YA_YUE_SHANG_XIAN = (1.1 * JI_ZU_E_DING_DIAN_YA);

constexpr static const double DIAN_WANG_DIAN_YA_YUE_XIA_XIAN = (0.9 * JI_ZU_E_DING_DIAN_YA);

constexpr static const double DIAN_WANG_PIN_LV_YUE_SHANG_XIAN = 52.5;

constexpr static const double DIAN_WANG_PIN_LV_YUE_XIA_XIAN = 47.5;

constexpr static const double JI_ZU_DIAN_YA_YUE_SHANG_XIAN = (1.1 * JI_ZU_E_DING_DIAN_YA);

constexpr static const double JI_ZU_DIAN_YA_YUE_XIA_XIAN = (0.9 * JI_ZU_E_DING_DIAN_YA);

constexpr static const double JI_ZU_PIN_LV_YUE_SHANG_XIAN = 52.5;

constexpr static const double JI_ZU_PIN_LV_YUE_XIA_XIAN = 47.5;

constexpr static const double JI_ZU_GUO_DIAN_LIU = (1.5 * JI_ZU_E_DING_DIAN_LIU);

constexpr static const double KUA_JIE_DUAN_LU_QI_SAN_XIANG_DIAN_LIU_BU_PING_HENG = (0.15 * JI_ZU_E_DING_DIAN_LIU);

constexpr static const double KUA_JIE_DUAN_LU_QI_DIAN_LIU_DA = (1.8 * JI_ZU_E_DING_DIAN_LIU);

constexpr static const double JI_ZU_SAN_XIANG_DIAN_LIU_BU_PING_HENG = (0.15 * JI_ZU_E_DING_DIAN_LIU);

constexpr static const double JI_ZU_NI_GONG_LV = (-0.07 * JI_ZU_E_DING_GONG_LV);

constexpr static const double QU_ZHOU_XIANG_YA_LI_CHAI_YOU_GAO = 1.1;

constexpr static const double HUA_YOU_WEN_DU_CHAI_YOU_GAO = 95.0;

constexpr static const double HUA_YOU_YA_LI_CHAI_YOU_DI = 0.30;

constexpr static const double HUA_YOU_YA_LI_CHAI_YOU_GUO_DI = 0.20;

constexpr static const double LENG_QUE_SHUI_WEN_DU_CHAI_YOU_GAO = 90.0;

constexpr static const double CHAO_SU_TING_JI = 1695.0;

constexpr static const double DAN_SHUI_YA_LI_DI = 0.025;

constexpr static const double QI_DONG_KONG_QI_YA_LI_CHAI_YOU_DI = 1.80;

constexpr static const double PAI_QI_WEN_DU_CHAI_YOU_GAO = 540.0;

constexpr static const double ZENG_YA_KONG_QI_WEN_DU_CHAI_YOU_GAO = 65.0;

constexpr static const double HAI_SHUI_YA_LI_CHAI_YOU_DI = 0.008;

constexpr static const double RAO_ZU_WEN_DU_CHAI_YOU_GAO = 160.0;

constexpr static const double RAO_ZU_WEN_DU_CHAI_YOU_GUO_GAO = 170.0;

constexpr static const double QIAN_ZHOU_CHENG_HUA_YOU_LIU_LIANG_CHAI_YOU_DI = 9.0;

constexpr static const double HOU_ZHOU_CHENG_HUA_YOU_LIU_LIANG_CHAI_YOU_DI = 4.0;

constexpr static const double HUA_YOU_WEN_DU_FA_DIAN_JI_GAO = 55.0;

constexpr static const double QIAN_ZHOU_CHENG_WEN_DU_FA_DIAN_JI_GAO = 80.0;

constexpr static const double HOU_ZHOU_CHENG_WEN_DU_FA_DIAN_JI_GAO = 80.0;

constexpr static const double QIAN_ZHOU_CHENG_YU_GONG_HUA_YOU_LIU_LIANG_CHAI_YOU_DI = 6.0;

constexpr static const double HOU_ZHOU_CHENG_YU_GONG_HUA_YOU_LIU_LIANG_CHAI_YOU_DI = 3.0;

constexpr static const double ZHAO_NEI_KONG_QI_WEN_DU_CHAI_YOU_GAO = 65.0;

constexpr static const double JIN_FENG_WEN_DU_CHAI_YOU_GAO = 65.0;

constexpr static const double CHU_FENG_WEN_DU_CHAI_YOU_GAO = PAI_QI_WEN_DU_CHAI_YOU_GAO;

constexpr static const double JIN_FENG_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double CHU_FENG_WEN_DU_QI_LUN_ZHENG_CHANG = 80.0;

constexpr static const double ZHUAN_SU_QI_LUN_ZHENG_CHANG = JI_ZU_E_DING_ZHUAN_SU;

constexpr static const double RUN_HUA_ZONG_GUAN_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double RUN_HUA_ZONG_GUAN_HUA_YOU_WEN_DU_QI_LUN_ZHENG_CHANG = 70.0;

constexpr static const double PAI_QI_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double RAO_ZU_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double ZHU_QI_MEN_ZHENG_QI_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double ZHU_QI_MEN_ZHENG_QI_WEN_DU_QI_LUN_ZHENG_CHANG = 100.0;

constexpr static const double CHOU_QI_QI_ZHENG_QI_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double CHOU_QI_QI_ZHENG_QI_WEN_DU_QI_LUN_ZHENG_CHANG = 100.0;

constexpr static const double QI_FENG_XI_TONG_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double QI_FENG_CHOU_QI_XI_TONG_ZHENG_QI_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double PAI_QI_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double JIAN_SU_QI_RUN_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double DIAN_DONG_NING_SHUI_BANG_CHU_KOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double TIAO_JIE_XI_TONG_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double LENG_QUE_HAI_SHUI_JIN_KOU_WEN_DU_QI_LUN_ZHENG_CHANG = WEN_DU_CHANG_WEN;

constexpr static const double QI_LUN_JI_ZHOU_CHENG_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double FA_DIAN_JI_ZHOU_CHENG_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double YOU_XIANG_HUA_YOU_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double JIAN_SU_QI_ZHOU_CHENG_HUI_YOU_WEN_DU_QI_LUN_ZHENG_CHANG = 50.0;

constexpr static const double ZHU_YOU_QI_CHU_KOU_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double DI_YA_LV_YOU_QI_QIAN_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double GAO_YA_LV_YOU_QI_HOU_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 2.5;

constexpr static const double DIAN_DONG_YOU_BANG_CHU_KOU_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double ZHU_YOU_BANG_JIN_KOU_HUA_YOU_YA_LI_QI_LUN_ZHENG_CHANG = 1.5;

constexpr static const double FANG_ZHEN_BU_CHANG = 100.0;

constexpr static const double CHAO_LIU_JI_SUAN_BU_CHANG = 1000.0;

constexpr static const double SIM_MO_REN_BU_CHANG = FANG_ZHEN_BU_CHANG;

constexpr static const double KONG_ZHI_XU_LIE_GENG_XIN_ZHOU_QI = 1000.0;

constexpr static const uint32_t KONG_ZHI_XU_LIE_ZUI_DA_BU_ZHOU_SHU = 25u;

constexpr static const double SHU_JU_GENG_XIN_T = FANG_ZHEN_BU_CHANG;

constexpr static const double TONG_YONG_ZAO_SHENG_XIANG_DUI_FU_ZHI = 0.0001;

constexpr static const double DIAN_WANG_E_DING_XIAN_DIAN_YA = 380.0;

constexpr static const double GEN_START_SIM_INTERVAL = FANG_ZHEN_BU_CHANG;

constexpr static const double GEN_WEN_SIM_INTERVAL = FANG_ZHEN_BU_CHANG;

constexpr static const uintptr_t ZONG_SHU_DIAN_ZHAN = 4;

constexpr static const uintptr_t ZONG_SHU_JI_ZU = 15;

constexpr static const uintptr_t ZONG_SHU_JI_ZU_CHAI_YOU = 5;

constexpr static const uintptr_t ZONG_SHU_JI_ZU_QI_LUN = 6;

constexpr static const uintptr_t ZONG_SHU_AN_DIAN = 4;

constexpr static const uintptr_t ZONG_SHU_NODE = 25;

constexpr static const uintptr_t ZONG_SHU_ZHI_LU = 27;

constexpr static const uintptr_t ZONG_SHU_FU_ZAI = 25;

constexpr static const uintptr_t ZONG_SHU_DUAN_LU_QI = 42;

constexpr static const double FU_ZAI_P_MAX = 1200.0;

constexpr static const double FU_ZAI_Q_MAX = 960.0;

constexpr static const double FU_ZAI_P_FACTOR = 0.8;

constexpr static const double FU_ZAI_Q_FACTOR = 0.6;

constexpr static const double FU_ZAI_Q_P = 0.75;

constexpr static const double ZHONG_ZAI_YU_ZHI_P = 480.0;

constexpr static const double ZHONG_ZAI_YU_ZHI_Q = 384.0;
