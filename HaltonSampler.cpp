
static const float theInv2p32 = 1.0f / (uint64(1) << 32);

// Compute points of the Halton sequence with with digit-permutations for different bases.
class BRAY_Halton
{
public:
    // Initialize permutation tables using Faure permutations
    static void initFaure();
    
    // Precompute the inversion tables
    static uint16 invert(uint16 base, uint16 digits, uint index, const UT_Array<uint16>& perm);

    // Precompute faure permute tables
    static void initTables(const UT_Array<UT_Array<uint16>>& perms);
    
    // Return the number of supported dimensions.
    static uint getDimensions() { return 256u; }

    // Return the Halton sample for the given dimension (component) and index.
    // If sample is called with dim > maxDimensions, then uniform random numbers are generated
    static float sample(uint dim, uint index);

    static float halton2(uint index);
    static float halton3(uint index);
    static float halton5(uint index);
    static float halton7(uint index);
    static float halton11(uint index);
    static float halton13(uint index);
    static float halton17(uint index);
    static float halton19(uint index);
    static float halton23(uint index);
    static float halton29(uint index);
    static float halton31(uint index);
    static float halton37(uint index);
    static float halton41(uint index);
    static float halton43(uint index);
    static float halton47(uint index);
    static float halton53(uint index);
    static float halton59(uint index);
    static float halton61(uint index);
    static float halton67(uint index);
    static float halton71(uint index);
    static float halton73(uint index);
    static float halton79(uint index);
    static float halton83(uint index);
    static float halton89(uint index);
    static float halton97(uint index);
    static float halton101(uint index);
    static float halton103(uint index);
    static float halton107(uint index);
    static float halton109(uint index);
    static float halton113(uint index);
    static float halton127(uint index);
    static float halton131(uint index);
    static float halton137(uint index);
    static float halton139(uint index);
    static float halton149(uint index);
    static float halton151(uint index);
    static float halton157(uint index);
    static float halton163(uint index);
    static float halton167(uint index);
    static float halton173(uint index);
    static float halton179(uint index);
    static float halton181(uint index);
    static float halton191(uint index);
    static float halton193(uint index);
    static float halton197(uint index);
    static float halton199(uint index);
    static float halton211(uint index);
    static float halton223(uint index);
    static float halton227(uint index);
    static float halton229(uint index);
    static float halton233(uint index);
    static float halton239(uint index);
    static float halton241(uint index);
    static float halton251(uint index);
    static float halton257(uint index);
    static float halton263(uint index);
    static float halton269(uint index);
    static float halton271(uint index);
    static float halton277(uint index);
    static float halton281(uint index);
    static float halton283(uint index);
    static float halton293(uint index);
    static float halton307(uint index);
    static float halton311(uint index);
    static float halton313(uint index);
    static float halton317(uint index);
    static float halton331(uint index);
    static float halton337(uint index);
    static float halton347(uint index);
    static float halton349(uint index);
    static float halton353(uint index);
    static float halton359(uint index);
    static float halton367(uint index);
    static float halton373(uint index);
    static float halton379(uint index);
    static float halton383(uint index);
    static float halton389(uint index);
    static float halton397(uint index);
    static float halton401(uint index);
    static float halton409(uint index);
    static float halton419(uint index);
    static float halton421(uint index);
    static float halton431(uint index);
    static float halton433(uint index);
    static float halton439(uint index);
    static float halton443(uint index);
    static float halton449(uint index);
    static float halton457(uint index);
    static float halton461(uint index);
    static float halton463(uint index);
    static float halton467(uint index);
    static float halton479(uint index);
    static float halton487(uint index);
    static float halton491(uint index);
    static float halton499(uint index);
    static float halton503(uint index);
    static float halton509(uint index);
    static float halton521(uint index);
    static float halton523(uint index);
    static float halton541(uint index);
    static float halton547(uint index);
    static float halton557(uint index);
    static float halton563(uint index);
    static float halton569(uint index);
    static float halton571(uint index);
    static float halton577(uint index);
    static float halton587(uint index);
    static float halton593(uint index);
    static float halton599(uint index);
    static float halton601(uint index);
    static float halton607(uint index);
    static float halton613(uint index);
    static float halton617(uint index);
    static float halton619(uint index);
    static float halton631(uint index);
    static float halton641(uint index);
    static float halton643(uint index);
    static float halton647(uint index);
    static float halton653(uint index);
    static float halton659(uint index);
    static float halton661(uint index);
    static float halton673(uint index);
    static float halton677(uint index);
    static float halton683(uint index);
    static float halton691(uint index);
    static float halton701(uint index);
    static float halton709(uint index);
    static float halton719(uint index);
    static float halton727(uint index);
    static float halton733(uint index);
    static float halton739(uint index);
    static float halton743(uint index);
    static float halton751(uint index);
    static float halton757(uint index);
    static float halton761(uint index);
    static float halton769(uint index);
    static float halton773(uint index);
    static float halton787(uint index);
    static float halton797(uint index);
    static float halton809(uint index);
    static float halton811(uint index);
    static float halton821(uint index);
    static float halton823(uint index);
    static float halton827(uint index);
    static float halton829(uint index);
    static float halton839(uint index);
    static float halton853(uint index);
    static float halton857(uint index);
    static float halton859(uint index);
    static float halton863(uint index);
    static float halton877(uint index);
    static float halton881(uint index);
    static float halton883(uint index);
    static float halton887(uint index);
    static float halton907(uint index);
    static float halton911(uint index);
    static float halton919(uint index);
    static float halton929(uint index);
    static float halton937(uint index);
    static float halton941(uint index);
    static float halton947(uint index);
    static float halton953(uint index);
    static float halton967(uint index);
    static float halton971(uint index);
    static float halton977(uint index);
    static float halton983(uint index);
    static float halton991(uint index);
    static float halton997(uint index);
    static float halton1009(uint index);
    static float halton1013(uint index);
    static float halton1019(uint index);
    static float halton1021(uint index);
    static float halton1031(uint index);
    static float halton1033(uint index);
    static float halton1039(uint index);
    static float halton1049(uint index);
    static float halton1051(uint index);
    static float halton1061(uint index);
    static float halton1063(uint index);
    static float halton1069(uint index);
    static float halton1087(uint index);
    static float halton1091(uint index);
    static float halton1093(uint index);
    static float halton1097(uint index);
    static float halton1103(uint index);
    static float halton1109(uint index);
    static float halton1117(uint index);
    static float halton1123(uint index);
    static float halton1129(uint index);
    static float halton1151(uint index);
    static float halton1153(uint index);
    static float halton1163(uint index);
    static float halton1171(uint index);
    static float halton1181(uint index);
    static float halton1187(uint index);
    static float halton1193(uint index);
    static float halton1201(uint index);
    static float halton1213(uint index);
    static float halton1217(uint index);
    static float halton1223(uint index);
    static float halton1229(uint index);
    static float halton1231(uint index);
    static float halton1237(uint index);
    static float halton1249(uint index);
    static float halton1259(uint index);
    static float halton1277(uint index);
    static float halton1279(uint index);
    static float halton1283(uint index);
    static float halton1289(uint index);
    static float halton1291(uint index);
    static float halton1297(uint index);
    static float halton1301(uint index);
    static float halton1303(uint index);
    static float halton1307(uint index);
    static float halton1319(uint index);
    static float halton1321(uint index);
    static float halton1327(uint index);
    static float halton1361(uint index);
    static float halton1367(uint index);
    static float halton1373(uint index);
    static float halton1381(uint index);
    static float halton1399(uint index);
    static float halton1409(uint index);
    static float halton1423(uint index);
    static float halton1427(uint index);
    static float halton1429(uint index);
    static float halton1433(uint index);
    static float halton1439(uint index);
    static float halton1447(uint index);
    static float halton1451(uint index);
    static float halton1453(uint index);
    static float halton1459(uint index);
    static float halton1471(uint index);
    static float halton1481(uint index);
    static float halton1483(uint index);
    static float halton1487(uint index);
    static float halton1489(uint index);
    static float halton1493(uint index);
    static float halton1499(uint index);
    static float halton1511(uint index);
    static float halton1523(uint index);
    static float halton1531(uint index);
    static float halton1543(uint index);
    static float halton1549(uint index);
    static float halton1553(uint index);
    static float halton1559(uint index);
    static float halton1567(uint index);
    static float halton1571(uint index);
    static float halton1579(uint index);
    static float halton1583(uint index);
    static float halton1597(uint index);
    static float halton1601(uint index);
    static float halton1607(uint index);
    static float halton1609(uint index);
    static float halton1613(uint index);
    static float halton1619(uint index);

    static uint16 thePerm3[243];
    static uint16 thePerm5[125];
    static uint16 thePerm7[343];
    static uint16 thePerm11[121];
    static uint16 thePerm13[169];
    static uint16 thePerm17[289];
    static uint16 thePerm19[361];
    static uint16 thePerm23[23];
    static uint16 thePerm29[29];
    static uint16 thePerm31[31];
    static uint16 thePerm37[37];
    static uint16 thePerm41[41];
    static uint16 thePerm43[43];
    static uint16 thePerm47[47];
    static uint16 thePerm53[53];
    static uint16 thePerm59[59];
    static uint16 thePerm61[61];
    static uint16 thePerm67[67];
    static uint16 thePerm71[71];
    static uint16 thePerm73[73];
    static uint16 thePerm79[79];
    static uint16 thePerm83[83];
    static uint16 thePerm89[89];
    static uint16 thePerm97[97];
    static uint16 thePerm101[101];
    static uint16 thePerm103[103];
    static uint16 thePerm107[107];
    static uint16 thePerm109[109];
    static uint16 thePerm113[113];
    static uint16 thePerm127[127];
    static uint16 thePerm131[131];
    static uint16 thePerm137[137];
    static uint16 thePerm139[139];
    static uint16 thePerm149[149];
    static uint16 thePerm151[151];
    static uint16 thePerm157[157];
    static uint16 thePerm163[163];
    static uint16 thePerm167[167];
    static uint16 thePerm173[173];
    static uint16 thePerm179[179];
    static uint16 thePerm181[181];
    static uint16 thePerm191[191];
    static uint16 thePerm193[193];
    static uint16 thePerm197[197];
    static uint16 thePerm199[199];
    static uint16 thePerm211[211];
    static uint16 thePerm223[223];
    static uint16 thePerm227[227];
    static uint16 thePerm229[229];
    static uint16 thePerm233[233];
    static uint16 thePerm239[239];
    static uint16 thePerm241[241];
    static uint16 thePerm251[251];
    static uint16 thePerm257[257];
    static uint16 thePerm263[263];
    static uint16 thePerm269[269];
    static uint16 thePerm271[271];
    static uint16 thePerm277[277];
    static uint16 thePerm281[281];
    static uint16 thePerm283[283];
    static uint16 thePerm293[293];
    static uint16 thePerm307[307];
    static uint16 thePerm311[311];
    static uint16 thePerm313[313];
    static uint16 thePerm317[317];
    static uint16 thePerm331[331];
    static uint16 thePerm337[337];
    static uint16 thePerm347[347];
    static uint16 thePerm349[349];
    static uint16 thePerm353[353];
    static uint16 thePerm359[359];
    static uint16 thePerm367[367];
    static uint16 thePerm373[373];
    static uint16 thePerm379[379];
    static uint16 thePerm383[383];
    static uint16 thePerm389[389];
    static uint16 thePerm397[397];
    static uint16 thePerm401[401];
    static uint16 thePerm409[409];
    static uint16 thePerm419[419];
    static uint16 thePerm421[421];
    static uint16 thePerm431[431];
    static uint16 thePerm433[433];
    static uint16 thePerm439[439];
    static uint16 thePerm443[443];
    static uint16 thePerm449[449];
    static uint16 thePerm457[457];
    static uint16 thePerm461[461];
    static uint16 thePerm463[463];
    static uint16 thePerm467[467];
    static uint16 thePerm479[479];
    static uint16 thePerm487[487];
    static uint16 thePerm491[491];
    static uint16 thePerm499[499];
    static uint16 thePerm503[503];
    static uint16 thePerm509[509];
    static uint16 thePerm521[521];
    static uint16 thePerm523[523];
    static uint16 thePerm541[541];
    static uint16 thePerm547[547];
    static uint16 thePerm557[557];
    static uint16 thePerm563[563];
    static uint16 thePerm569[569];
    static uint16 thePerm571[571];
    static uint16 thePerm577[577];
    static uint16 thePerm587[587];
    static uint16 thePerm593[593];
    static uint16 thePerm599[599];
    static uint16 thePerm601[601];
    static uint16 thePerm607[607];
    static uint16 thePerm613[613];
    static uint16 thePerm617[617];
    static uint16 thePerm619[619];
    static uint16 thePerm631[631];
    static uint16 thePerm641[641];
    static uint16 thePerm643[643];
    static uint16 thePerm647[647];
    static uint16 thePerm653[653];
    static uint16 thePerm659[659];
    static uint16 thePerm661[661];
    static uint16 thePerm673[673];
    static uint16 thePerm677[677];
    static uint16 thePerm683[683];
    static uint16 thePerm691[691];
    static uint16 thePerm701[701];
    static uint16 thePerm709[709];
    static uint16 thePerm719[719];
    static uint16 thePerm727[727];
    static uint16 thePerm733[733];
    static uint16 thePerm739[739];
    static uint16 thePerm743[743];
    static uint16 thePerm751[751];
    static uint16 thePerm757[757];
    static uint16 thePerm761[761];
    static uint16 thePerm769[769];
    static uint16 thePerm773[773];
    static uint16 thePerm787[787];
    static uint16 thePerm797[797];
    static uint16 thePerm809[809];
    static uint16 thePerm811[811];
    static uint16 thePerm821[821];
    static uint16 thePerm823[823];
    static uint16 thePerm827[827];
    static uint16 thePerm829[829];
    static uint16 thePerm839[839];
    static uint16 thePerm853[853];
    static uint16 thePerm857[857];
    static uint16 thePerm859[859];
    static uint16 thePerm863[863];
    static uint16 thePerm877[877];
    static uint16 thePerm881[881];
    static uint16 thePerm883[883];
    static uint16 thePerm887[887];
    static uint16 thePerm907[907];
    static uint16 thePerm911[911];
    static uint16 thePerm919[919];
    static uint16 thePerm929[929];
    static uint16 thePerm937[937];
    static uint16 thePerm941[941];
    static uint16 thePerm947[947];
    static uint16 thePerm953[953];
    static uint16 thePerm967[967];
    static uint16 thePerm971[971];
    static uint16 thePerm977[977];
    static uint16 thePerm983[983];
    static uint16 thePerm991[991];
    static uint16 thePerm997[997];
    static uint16 thePerm1009[1009];
    static uint16 thePerm1013[1013];
    static uint16 thePerm1019[1019];
    static uint16 thePerm1021[1021];
    static uint16 thePerm1031[1031];
    static uint16 thePerm1033[1033];
    static uint16 thePerm1039[1039];
    static uint16 thePerm1049[1049];
    static uint16 thePerm1051[1051];
    static uint16 thePerm1061[1061];
    static uint16 thePerm1063[1063];
    static uint16 thePerm1069[1069];
    static uint16 thePerm1087[1087];
    static uint16 thePerm1091[1091];
    static uint16 thePerm1093[1093];
    static uint16 thePerm1097[1097];
    static uint16 thePerm1103[1103];
    static uint16 thePerm1109[1109];
    static uint16 thePerm1117[1117];
    static uint16 thePerm1123[1123];
    static uint16 thePerm1129[1129];
    static uint16 thePerm1151[1151];
    static uint16 thePerm1153[1153];
    static uint16 thePerm1163[1163];
    static uint16 thePerm1171[1171];
    static uint16 thePerm1181[1181];
    static uint16 thePerm1187[1187];
    static uint16 thePerm1193[1193];
    static uint16 thePerm1201[1201];
    static uint16 thePerm1213[1213];
    static uint16 thePerm1217[1217];
    static uint16 thePerm1223[1223];
    static uint16 thePerm1229[1229];
    static uint16 thePerm1231[1231];
    static uint16 thePerm1237[1237];
    static uint16 thePerm1249[1249];
    static uint16 thePerm1259[1259];
    static uint16 thePerm1277[1277];
    static uint16 thePerm1279[1279];
    static uint16 thePerm1283[1283];
    static uint16 thePerm1289[1289];
    static uint16 thePerm1291[1291];
    static uint16 thePerm1297[1297];
    static uint16 thePerm1301[1301];
    static uint16 thePerm1303[1303];
    static uint16 thePerm1307[1307];
    static uint16 thePerm1319[1319];
    static uint16 thePerm1321[1321];
    static uint16 thePerm1327[1327];
    static uint16 thePerm1361[1361];
    static uint16 thePerm1367[1367];
    static uint16 thePerm1373[1373];
    static uint16 thePerm1381[1381];
    static uint16 thePerm1399[1399];
    static uint16 thePerm1409[1409];
    static uint16 thePerm1423[1423];
    static uint16 thePerm1427[1427];
    static uint16 thePerm1429[1429];
    static uint16 thePerm1433[1433];
    static uint16 thePerm1439[1439];
    static uint16 thePerm1447[1447];
    static uint16 thePerm1451[1451];
    static uint16 thePerm1453[1453];
    static uint16 thePerm1459[1459];
    static uint16 thePerm1471[1471];
    static uint16 thePerm1481[1481];
    static uint16 thePerm1483[1483];
    static uint16 thePerm1487[1487];
    static uint16 thePerm1489[1489];
    static uint16 thePerm1493[1493];
    static uint16 thePerm1499[1499];
    static uint16 thePerm1511[1511];
    static uint16 thePerm1523[1523];
    static uint16 thePerm1531[1531];
    static uint16 thePerm1543[1543];
    static uint16 thePerm1549[1549];
    static uint16 thePerm1553[1553];
    static uint16 thePerm1559[1559];
    static uint16 thePerm1567[1567];
    static uint16 thePerm1571[1571];
    static uint16 thePerm1579[1579];
    static uint16 thePerm1583[1583];
    static uint16 thePerm1597[1597];
    static uint16 thePerm1601[1601];
    static uint16 thePerm1607[1607];
    static uint16 thePerm1609[1609];
    static uint16 thePerm1613[1613];
    static uint16 thePerm1619[1619];
};

void
BRAY_Halton::initFaure()
{
    const uint max_base = 1619u;
    UT_Array<UT_Array<uint16>> perms(max_base + 1, max_base + 1);
     // Keep identity permutations for base 1, 2, 3.
    for (uint k = 1; k <= 3; ++k)
    {
        perms[k].setSize(k);
        for (unsigned i = 0; i < k; ++i)
            perms[k][i] = i;
    }
    for (uint base = 4; base <= max_base; ++base)
    {
        perms[base].setSize(base);
        const unsigned b = base / 2;
        if (base & 1) // odd
        {
            for (unsigned i = 0; i < base - 1; ++i)
                perms[base][i + (i >= b)] = perms[base - 1][i] + (perms[base - 1][i] >= b);
            perms[base][b] = b;
        }
        else // even
        {
            for (unsigned i = 0; i < b; ++i)
            {
                perms[base][i] = 2 * perms[b][i];
                perms[base][b + i] = 2 * perms[b][i] + 1;
            }
        }
    }
    initTables(perms);
}

float
BRAY_Halton::sample(uint dimension, uint index)
{
    switch (dimension)
    {
        case 0:
            return halton2(index);
        case 1:
            return halton3(index);
        case 2:
            return halton5(index);
        case 3:
            return halton7(index);
        case 4:
            return halton11(index);
        case 5:
            return halton13(index);
        case 6:
            return halton17(index);
        case 7:
            return halton19(index);
        case 8:
            return halton23(index);
        case 9:
            return halton29(index);
        case 10:
            return halton31(index);
        case 11:
            return halton37(index);
        case 12:
            return halton41(index);
        case 13:
            return halton43(index);
        case 14:
            return halton47(index);
        case 15:
            return halton53(index);
        case 16:
            return halton59(index);
        case 17:
            return halton61(index);
        case 18:
            return halton67(index);
        case 19:
            return halton71(index);
        case 20:
            return halton73(index);
        case 21:
            return halton79(index);
        case 22:
            return halton83(index);
        case 23:
            return halton89(index);
        case 24:
            return halton97(index);
        case 25:
            return halton101(index);
        case 26:
            return halton103(index);
        case 27:
            return halton107(index);
        case 28:
            return halton109(index);
        case 29:
            return halton113(index);
        case 30:
            return halton127(index);
        case 31:
            return halton131(index);
        case 32:
            return halton137(index);
        case 33:
            return halton139(index);
        case 34:
            return halton149(index);
        case 35:
            return halton151(index);
        case 36:
            return halton157(index);
        case 37:
            return halton163(index);
        case 38:
            return halton167(index);
        case 39:
            return halton173(index);
        case 40:
            return halton179(index);
        case 41:
            return halton181(index);
        case 42:
            return halton191(index);
        case 43:
            return halton193(index);
        case 44:
            return halton197(index);
        case 45:
            return halton199(index);
        case 46:
            return halton211(index);
        case 47:
            return halton223(index);
        case 48:
            return halton227(index);
        case 49:
            return halton229(index);
        case 50:
            return halton233(index);
        case 51:
            return halton239(index);
        case 52:
            return halton241(index);
        case 53:
            return halton251(index);
        case 54:
            return halton257(index);
        case 55:
            return halton263(index);
        case 56:
            return halton269(index);
        case 57:
            return halton271(index);
        case 58:
            return halton277(index);
        case 59:
            return halton281(index);
        case 60:
            return halton283(index);
        case 61:
            return halton293(index);
        case 62:
            return halton307(index);
        case 63:
            return halton311(index);
        case 64:
            return halton313(index);
        case 65:
            return halton317(index);
        case 66:
            return halton331(index);
        case 67:
            return halton337(index);
        case 68:
            return halton347(index);
        case 69:
            return halton349(index);
        case 70:
            return halton353(index);
        case 71:
            return halton359(index);
        case 72:
            return halton367(index);
        case 73:
            return halton373(index);
        case 74:
            return halton379(index);
        case 75:
            return halton383(index);
        case 76:
            return halton389(index);
        case 77:
            return halton397(index);
        case 78:
            return halton401(index);
        case 79:
            return halton409(index);
        case 80:
            return halton419(index);
        case 81:
            return halton421(index);
        case 82:
            return halton431(index);
        case 83:
            return halton433(index);
        case 84:
            return halton439(index);
        case 85:
            return halton443(index);
        case 86:
            return halton449(index);
        case 87:
            return halton457(index);
        case 88:
            return halton461(index);
        case 89:
            return halton463(index);
        case 90:
            return halton467(index);
        case 91:
            return halton479(index);
        case 92:
            return halton487(index);
        case 93:
            return halton491(index);
        case 94:
            return halton499(index);
        case 95:
            return halton503(index);
        case 96:
            return halton509(index);
        case 97:
            return halton521(index);
        case 98:
            return halton523(index);
        case 99:
            return halton541(index);
        case 100:
            return halton547(index);
        case 101:
            return halton557(index);
        case 102:
            return halton563(index);
        case 103:
            return halton569(index);
        case 104:
            return halton571(index);
        case 105:
            return halton577(index);
        case 106:
            return halton587(index);
        case 107:
            return halton593(index);
        case 108:
            return halton599(index);
        case 109:
            return halton601(index);
        case 110:
            return halton607(index);
        case 111:
            return halton613(index);
        case 112:
            return halton617(index);
        case 113:
            return halton619(index);
        case 114:
            return halton631(index);
        case 115:
            return halton641(index);
        case 116:
            return halton643(index);
        case 117:
            return halton647(index);
        case 118:
            return halton653(index);
        case 119:
            return halton659(index);
        case 120:
            return halton661(index);
        case 121:
            return halton673(index);
        case 122:
            return halton677(index);
        case 123:
            return halton683(index);
        case 124:
            return halton691(index);
        case 125:
            return halton701(index);
        case 126:
            return halton709(index);
        case 127:
            return halton719(index);
        case 128:
            return halton727(index);
        case 129:
            return halton733(index);
        case 130:
            return halton739(index);
        case 131:
            return halton743(index);
        case 132:
            return halton751(index);
        case 133:
            return halton757(index);
        case 134:
            return halton761(index);
        case 135:
            return halton769(index);
        case 136:
            return halton773(index);
        case 137:
            return halton787(index);
        case 138:
            return halton797(index);
        case 139:
            return halton809(index);
        case 140:
            return halton811(index);
        case 141:
            return halton821(index);
        case 142:
            return halton823(index);
        case 143:
            return halton827(index);
        case 144:
            return halton829(index);
        case 145:
            return halton839(index);
        case 146:
            return halton853(index);
        case 147:
            return halton857(index);
        case 148:
            return halton859(index);
        case 149:
            return halton863(index);
        case 150:
            return halton877(index);
        case 151:
            return halton881(index);
        case 152:
            return halton883(index);
        case 153:
            return halton887(index);
        case 154:
            return halton907(index);
        case 155:
            return halton911(index);
        case 156:
            return halton919(index);
        case 157:
            return halton929(index);
        case 158:
            return halton937(index);
        case 159:
            return halton941(index);
        case 160:
            return halton947(index);
        case 161:
            return halton953(index);
        case 162:
            return halton967(index);
        case 163:
            return halton971(index);
        case 164:
            return halton977(index);
        case 165:
            return halton983(index);
        case 166:
            return halton991(index);
        case 167:
            return halton997(index);
        case 168:
            return halton1009(index);
        case 169:
            return halton1013(index);
        case 170:
            return halton1019(index);
        case 171:
            return halton1021(index);
        case 172:
            return halton1031(index);
        case 173:
            return halton1033(index);
        case 174:
            return halton1039(index);
        case 175:
            return halton1049(index);
        case 176:
            return halton1051(index);
        case 177:
            return halton1061(index);
        case 178:
            return halton1063(index);
        case 179:
            return halton1069(index);
        case 180:
            return halton1087(index);
        case 181:
            return halton1091(index);
        case 182:
            return halton1093(index);
        case 183:
            return halton1097(index);
        case 184:
            return halton1103(index);
        case 185:
            return halton1109(index);
        case 186:
            return halton1117(index);
        case 187:
            return halton1123(index);
        case 188:
            return halton1129(index);
        case 189:
            return halton1151(index);
        case 190:
            return halton1153(index);
        case 191:
            return halton1163(index);
        case 192:
            return halton1171(index);
        case 193:
            return halton1181(index);
        case 194:
            return halton1187(index);
        case 195:
            return halton1193(index);
        case 196:
            return halton1201(index);
        case 197:
            return halton1213(index);
        case 198:
            return halton1217(index);
        case 199:
            return halton1223(index);
        case 200:
            return halton1229(index);
        case 201:
            return halton1231(index);
        case 202:
            return halton1237(index);
        case 203:
            return halton1249(index);
        case 204:
            return halton1259(index);
        case 205:
            return halton1277(index);
        case 206:
            return halton1279(index);
        case 207:
            return halton1283(index);
        case 208:
            return halton1289(index);
        case 209:
            return halton1291(index);
        case 210:
            return halton1297(index);
        case 211:
            return halton1301(index);
        case 212:
            return halton1303(index);
        case 213:
            return halton1307(index);
        case 214:
            return halton1319(index);
        case 215:
            return halton1321(index);
        case 216:
            return halton1327(index);
        case 217:
            return halton1361(index);
        case 218:
            return halton1367(index);
        case 219:
            return halton1373(index);
        case 220:
            return halton1381(index);
        case 221:
            return halton1399(index);
        case 222:
            return halton1409(index);
        case 223:
            return halton1423(index);
        case 224:
            return halton1427(index);
        case 225:
            return halton1429(index);
        case 226:
            return halton1433(index);
        case 227:
            return halton1439(index);
        case 228:
            return halton1447(index);
        case 229:
            return halton1451(index);
        case 230:
            return halton1453(index);
        case 231:
            return halton1459(index);
        case 232:
            return halton1471(index);
        case 233:
            return halton1481(index);
        case 234:
            return halton1483(index);
        case 235:
            return halton1487(index);
        case 236:
            return halton1489(index);
        case 237:
            return halton1493(index);
        case 238:
            return halton1499(index);
        case 239:
            return halton1511(index);
        case 240:
            return halton1523(index);
        case 241:
            return halton1531(index);
        case 242:
            return halton1543(index);
        case 243:
            return halton1549(index);
        case 244:
            return halton1553(index);
        case 245:
            return halton1559(index);
        case 246:
            return halton1567(index);
        case 247:
            return halton1571(index);
        case 248:
            return halton1579(index);
        case 249:
            return halton1583(index);
        case 250:
            return halton1597(index);
        case 251:
            return halton1601(index);
        case 252:
            return halton1607(index);
        case 253:
            return halton1609(index);
        case 254:
            return halton1613(index);
        case 255:
            return halton1619(index);
    }
    return 0.f;
}

uint16
BRAY_Halton::invert(uint16 base, uint16 digits, uint index, const UT_Array<uint16>& perm)
{
    uint16 result = 0;
    for (uint16 i = 0; i < digits; ++i)
    { 
        result = result * base + perm[index % base];
        index /= base;
    }
    return result;
}

void
BRAY_Halton::initTables(const UT_Array<UT_Array<uint16>>& perms)
{

    for (unsigned short i = 0; i < 243; ++i)
       thePerm3[i] = invert(3, 5, i, perms[3]);
    for (unsigned short i = 0; i < 125; ++i)
       thePerm5[i] = invert(5, 3, i, perms[5]);
    for (unsigned short i = 0; i < 343; ++i)
       thePerm7[i] = invert(7, 3, i, perms[7]);
    for (unsigned short i = 0; i < 121; ++i)
       thePerm11[i] = invert(11, 2, i, perms[11]);
    for (unsigned short i = 0; i < 169; ++i)
       thePerm13[i] = invert(13, 2, i, perms[13]);
    for (unsigned short i = 0; i < 289; ++i)
       thePerm17[i] = invert(17, 2, i, perms[17]);
    for (unsigned short i = 0; i < 361; ++i)
       thePerm19[i] = invert(19, 2, i, perms[19]);
    for (unsigned short i = 0; i < 23; ++i)
       thePerm23[i] = invert(23, 1, i, perms[23]);
    for (unsigned short i = 0; i < 29; ++i)
       thePerm29[i] = invert(29, 1, i, perms[29]);
    for (unsigned short i = 0; i < 31; ++i)
       thePerm31[i] = invert(31, 1, i, perms[31]);
    for (unsigned short i = 0; i < 37; ++i)
       thePerm37[i] = invert(37, 1, i, perms[37]);
    for (unsigned short i = 0; i < 41; ++i)
       thePerm41[i] = invert(41, 1, i, perms[41]);
    for (unsigned short i = 0; i < 43; ++i)
       thePerm43[i] = invert(43, 1, i, perms[43]);
    for (unsigned short i = 0; i < 47; ++i)
       thePerm47[i] = invert(47, 1, i, perms[47]);
    for (unsigned short i = 0; i < 53; ++i)
       thePerm53[i] = invert(53, 1, i, perms[53]);
    for (unsigned short i = 0; i < 59; ++i)
       thePerm59[i] = invert(59, 1, i, perms[59]);
    for (unsigned short i = 0; i < 61; ++i)
       thePerm61[i] = invert(61, 1, i, perms[61]);
    for (unsigned short i = 0; i < 67; ++i)
       thePerm67[i] = invert(67, 1, i, perms[67]);
    for (unsigned short i = 0; i < 71; ++i)
       thePerm71[i] = invert(71, 1, i, perms[71]);
    for (unsigned short i = 0; i < 73; ++i)
       thePerm73[i] = invert(73, 1, i, perms[73]);
    for (unsigned short i = 0; i < 79; ++i)
       thePerm79[i] = invert(79, 1, i, perms[79]);
    for (unsigned short i = 0; i < 83; ++i)
       thePerm83[i] = invert(83, 1, i, perms[83]);
    for (unsigned short i = 0; i < 89; ++i)
       thePerm89[i] = invert(89, 1, i, perms[89]);
    for (unsigned short i = 0; i < 97; ++i)
       thePerm97[i] = invert(97, 1, i, perms[97]);
    for (unsigned short i = 0; i < 101; ++i)
       thePerm101[i] = invert(101, 1, i, perms[101]);
    for (unsigned short i = 0; i < 103; ++i)
       thePerm103[i] = invert(103, 1, i, perms[103]);
    for (unsigned short i = 0; i < 107; ++i)
       thePerm107[i] = invert(107, 1, i, perms[107]);
    for (unsigned short i = 0; i < 109; ++i)
       thePerm109[i] = invert(109, 1, i, perms[109]);
    for (unsigned short i = 0; i < 113; ++i)
       thePerm113[i] = invert(113, 1, i, perms[113]);
    for (unsigned short i = 0; i < 127; ++i)
       thePerm127[i] = invert(127, 1, i, perms[127]);
    for (unsigned short i = 0; i < 131; ++i)
       thePerm131[i] = invert(131, 1, i, perms[131]);
    for (unsigned short i = 0; i < 137; ++i)
       thePerm137[i] = invert(137, 1, i, perms[137]);
    for (unsigned short i = 0; i < 139; ++i)
       thePerm139[i] = invert(139, 1, i, perms[139]);
    for (unsigned short i = 0; i < 149; ++i)
       thePerm149[i] = invert(149, 1, i, perms[149]);
    for (unsigned short i = 0; i < 151; ++i)
       thePerm151[i] = invert(151, 1, i, perms[151]);
    for (unsigned short i = 0; i < 157; ++i)
       thePerm157[i] = invert(157, 1, i, perms[157]);
    for (unsigned short i = 0; i < 163; ++i)
       thePerm163[i] = invert(163, 1, i, perms[163]);
    for (unsigned short i = 0; i < 167; ++i)
       thePerm167[i] = invert(167, 1, i, perms[167]);
    for (unsigned short i = 0; i < 173; ++i)
       thePerm173[i] = invert(173, 1, i, perms[173]);
    for (unsigned short i = 0; i < 179; ++i)
       thePerm179[i] = invert(179, 1, i, perms[179]);
    for (unsigned short i = 0; i < 181; ++i)
       thePerm181[i] = invert(181, 1, i, perms[181]);
    for (unsigned short i = 0; i < 191; ++i)
       thePerm191[i] = invert(191, 1, i, perms[191]);
    for (unsigned short i = 0; i < 193; ++i)
       thePerm193[i] = invert(193, 1, i, perms[193]);
    for (unsigned short i = 0; i < 197; ++i)
       thePerm197[i] = invert(197, 1, i, perms[197]);
    for (unsigned short i = 0; i < 199; ++i)
       thePerm199[i] = invert(199, 1, i, perms[199]);
    for (unsigned short i = 0; i < 211; ++i)
       thePerm211[i] = invert(211, 1, i, perms[211]);
    for (unsigned short i = 0; i < 223; ++i)
       thePerm223[i] = invert(223, 1, i, perms[223]);
    for (unsigned short i = 0; i < 227; ++i)
       thePerm227[i] = invert(227, 1, i, perms[227]);
    for (unsigned short i = 0; i < 229; ++i)
       thePerm229[i] = invert(229, 1, i, perms[229]);
    for (unsigned short i = 0; i < 233; ++i)
       thePerm233[i] = invert(233, 1, i, perms[233]);
    for (unsigned short i = 0; i < 239; ++i)
       thePerm239[i] = invert(239, 1, i, perms[239]);
    for (unsigned short i = 0; i < 241; ++i)
       thePerm241[i] = invert(241, 1, i, perms[241]);
    for (unsigned short i = 0; i < 251; ++i)
       thePerm251[i] = invert(251, 1, i, perms[251]);
    for (unsigned short i = 0; i < 257; ++i)
       thePerm257[i] = invert(257, 1, i, perms[257]);
    for (unsigned short i = 0; i < 263; ++i)
       thePerm263[i] = invert(263, 1, i, perms[263]);
    for (unsigned short i = 0; i < 269; ++i)
       thePerm269[i] = invert(269, 1, i, perms[269]);
    for (unsigned short i = 0; i < 271; ++i)
       thePerm271[i] = invert(271, 1, i, perms[271]);
    for (unsigned short i = 0; i < 277; ++i)
       thePerm277[i] = invert(277, 1, i, perms[277]);
    for (unsigned short i = 0; i < 281; ++i)
       thePerm281[i] = invert(281, 1, i, perms[281]);
    for (unsigned short i = 0; i < 283; ++i)
       thePerm283[i] = invert(283, 1, i, perms[283]);
    for (unsigned short i = 0; i < 293; ++i)
       thePerm293[i] = invert(293, 1, i, perms[293]);
    for (unsigned short i = 0; i < 307; ++i)
       thePerm307[i] = invert(307, 1, i, perms[307]);
    for (unsigned short i = 0; i < 311; ++i)
       thePerm311[i] = invert(311, 1, i, perms[311]);
    for (unsigned short i = 0; i < 313; ++i)
       thePerm313[i] = invert(313, 1, i, perms[313]);
    for (unsigned short i = 0; i < 317; ++i)
       thePerm317[i] = invert(317, 1, i, perms[317]);
    for (unsigned short i = 0; i < 331; ++i)
       thePerm331[i] = invert(331, 1, i, perms[331]);
    for (unsigned short i = 0; i < 337; ++i)
       thePerm337[i] = invert(337, 1, i, perms[337]);
    for (unsigned short i = 0; i < 347; ++i)
       thePerm347[i] = invert(347, 1, i, perms[347]);
    for (unsigned short i = 0; i < 349; ++i)
       thePerm349[i] = invert(349, 1, i, perms[349]);
    for (unsigned short i = 0; i < 353; ++i)
       thePerm353[i] = invert(353, 1, i, perms[353]);
    for (unsigned short i = 0; i < 359; ++i)
       thePerm359[i] = invert(359, 1, i, perms[359]);
    for (unsigned short i = 0; i < 367; ++i)
       thePerm367[i] = invert(367, 1, i, perms[367]);
    for (unsigned short i = 0; i < 373; ++i)
       thePerm373[i] = invert(373, 1, i, perms[373]);
    for (unsigned short i = 0; i < 379; ++i)
       thePerm379[i] = invert(379, 1, i, perms[379]);
    for (unsigned short i = 0; i < 383; ++i)
       thePerm383[i] = invert(383, 1, i, perms[383]);
    for (unsigned short i = 0; i < 389; ++i)
       thePerm389[i] = invert(389, 1, i, perms[389]);
    for (unsigned short i = 0; i < 397; ++i)
       thePerm397[i] = invert(397, 1, i, perms[397]);
    for (unsigned short i = 0; i < 401; ++i)
       thePerm401[i] = invert(401, 1, i, perms[401]);
    for (unsigned short i = 0; i < 409; ++i)
       thePerm409[i] = invert(409, 1, i, perms[409]);
    for (unsigned short i = 0; i < 419; ++i)
       thePerm419[i] = invert(419, 1, i, perms[419]);
    for (unsigned short i = 0; i < 421; ++i)
       thePerm421[i] = invert(421, 1, i, perms[421]);
    for (unsigned short i = 0; i < 431; ++i)
       thePerm431[i] = invert(431, 1, i, perms[431]);
    for (unsigned short i = 0; i < 433; ++i)
       thePerm433[i] = invert(433, 1, i, perms[433]);
    for (unsigned short i = 0; i < 439; ++i)
       thePerm439[i] = invert(439, 1, i, perms[439]);
    for (unsigned short i = 0; i < 443; ++i)
       thePerm443[i] = invert(443, 1, i, perms[443]);
    for (unsigned short i = 0; i < 449; ++i)
       thePerm449[i] = invert(449, 1, i, perms[449]);
    for (unsigned short i = 0; i < 457; ++i)
       thePerm457[i] = invert(457, 1, i, perms[457]);
    for (unsigned short i = 0; i < 461; ++i)
       thePerm461[i] = invert(461, 1, i, perms[461]);
    for (unsigned short i = 0; i < 463; ++i)
       thePerm463[i] = invert(463, 1, i, perms[463]);
    for (unsigned short i = 0; i < 467; ++i)
       thePerm467[i] = invert(467, 1, i, perms[467]);
    for (unsigned short i = 0; i < 479; ++i)
       thePerm479[i] = invert(479, 1, i, perms[479]);
    for (unsigned short i = 0; i < 487; ++i)
       thePerm487[i] = invert(487, 1, i, perms[487]);
    for (unsigned short i = 0; i < 491; ++i)
       thePerm491[i] = invert(491, 1, i, perms[491]);
    for (unsigned short i = 0; i < 499; ++i)
       thePerm499[i] = invert(499, 1, i, perms[499]);
    for (unsigned short i = 0; i < 503; ++i)
       thePerm503[i] = invert(503, 1, i, perms[503]);
    for (unsigned short i = 0; i < 509; ++i)
       thePerm509[i] = invert(509, 1, i, perms[509]);
    for (unsigned short i = 0; i < 521; ++i)
       thePerm521[i] = invert(521, 1, i, perms[521]);
    for (unsigned short i = 0; i < 523; ++i)
       thePerm523[i] = invert(523, 1, i, perms[523]);
    for (unsigned short i = 0; i < 541; ++i)
       thePerm541[i] = invert(541, 1, i, perms[541]);
    for (unsigned short i = 0; i < 547; ++i)
       thePerm547[i] = invert(547, 1, i, perms[547]);
    for (unsigned short i = 0; i < 557; ++i)
       thePerm557[i] = invert(557, 1, i, perms[557]);
    for (unsigned short i = 0; i < 563; ++i)
       thePerm563[i] = invert(563, 1, i, perms[563]);
    for (unsigned short i = 0; i < 569; ++i)
       thePerm569[i] = invert(569, 1, i, perms[569]);
    for (unsigned short i = 0; i < 571; ++i)
       thePerm571[i] = invert(571, 1, i, perms[571]);
    for (unsigned short i = 0; i < 577; ++i)
       thePerm577[i] = invert(577, 1, i, perms[577]);
    for (unsigned short i = 0; i < 587; ++i)
       thePerm587[i] = invert(587, 1, i, perms[587]);
    for (unsigned short i = 0; i < 593; ++i)
       thePerm593[i] = invert(593, 1, i, perms[593]);
    for (unsigned short i = 0; i < 599; ++i)
       thePerm599[i] = invert(599, 1, i, perms[599]);
    for (unsigned short i = 0; i < 601; ++i)
       thePerm601[i] = invert(601, 1, i, perms[601]);
    for (unsigned short i = 0; i < 607; ++i)
       thePerm607[i] = invert(607, 1, i, perms[607]);
    for (unsigned short i = 0; i < 613; ++i)
       thePerm613[i] = invert(613, 1, i, perms[613]);
    for (unsigned short i = 0; i < 617; ++i)
       thePerm617[i] = invert(617, 1, i, perms[617]);
    for (unsigned short i = 0; i < 619; ++i)
       thePerm619[i] = invert(619, 1, i, perms[619]);
    for (unsigned short i = 0; i < 631; ++i)
       thePerm631[i] = invert(631, 1, i, perms[631]);
    for (unsigned short i = 0; i < 641; ++i)
       thePerm641[i] = invert(641, 1, i, perms[641]);
    for (unsigned short i = 0; i < 643; ++i)
       thePerm643[i] = invert(643, 1, i, perms[643]);
    for (unsigned short i = 0; i < 647; ++i)
       thePerm647[i] = invert(647, 1, i, perms[647]);
    for (unsigned short i = 0; i < 653; ++i)
       thePerm653[i] = invert(653, 1, i, perms[653]);
    for (unsigned short i = 0; i < 659; ++i)
       thePerm659[i] = invert(659, 1, i, perms[659]);
    for (unsigned short i = 0; i < 661; ++i)
       thePerm661[i] = invert(661, 1, i, perms[661]);
    for (unsigned short i = 0; i < 673; ++i)
       thePerm673[i] = invert(673, 1, i, perms[673]);
    for (unsigned short i = 0; i < 677; ++i)
       thePerm677[i] = invert(677, 1, i, perms[677]);
    for (unsigned short i = 0; i < 683; ++i)
       thePerm683[i] = invert(683, 1, i, perms[683]);
    for (unsigned short i = 0; i < 691; ++i)
       thePerm691[i] = invert(691, 1, i, perms[691]);
    for (unsigned short i = 0; i < 701; ++i)
       thePerm701[i] = invert(701, 1, i, perms[701]);
    for (unsigned short i = 0; i < 709; ++i)
       thePerm709[i] = invert(709, 1, i, perms[709]);
    for (unsigned short i = 0; i < 719; ++i)
       thePerm719[i] = invert(719, 1, i, perms[719]);
    for (unsigned short i = 0; i < 727; ++i)
       thePerm727[i] = invert(727, 1, i, perms[727]);
    for (unsigned short i = 0; i < 733; ++i)
       thePerm733[i] = invert(733, 1, i, perms[733]);
    for (unsigned short i = 0; i < 739; ++i)
       thePerm739[i] = invert(739, 1, i, perms[739]);
    for (unsigned short i = 0; i < 743; ++i)
       thePerm743[i] = invert(743, 1, i, perms[743]);
    for (unsigned short i = 0; i < 751; ++i)
       thePerm751[i] = invert(751, 1, i, perms[751]);
    for (unsigned short i = 0; i < 757; ++i)
       thePerm757[i] = invert(757, 1, i, perms[757]);
    for (unsigned short i = 0; i < 761; ++i)
       thePerm761[i] = invert(761, 1, i, perms[761]);
    for (unsigned short i = 0; i < 769; ++i)
       thePerm769[i] = invert(769, 1, i, perms[769]);
    for (unsigned short i = 0; i < 773; ++i)
       thePerm773[i] = invert(773, 1, i, perms[773]);
    for (unsigned short i = 0; i < 787; ++i)
       thePerm787[i] = invert(787, 1, i, perms[787]);
    for (unsigned short i = 0; i < 797; ++i)
       thePerm797[i] = invert(797, 1, i, perms[797]);
    for (unsigned short i = 0; i < 809; ++i)
       thePerm809[i] = invert(809, 1, i, perms[809]);
    for (unsigned short i = 0; i < 811; ++i)
       thePerm811[i] = invert(811, 1, i, perms[811]);
    for (unsigned short i = 0; i < 821; ++i)
       thePerm821[i] = invert(821, 1, i, perms[821]);
    for (unsigned short i = 0; i < 823; ++i)
       thePerm823[i] = invert(823, 1, i, perms[823]);
    for (unsigned short i = 0; i < 827; ++i)
       thePerm827[i] = invert(827, 1, i, perms[827]);
    for (unsigned short i = 0; i < 829; ++i)
       thePerm829[i] = invert(829, 1, i, perms[829]);
    for (unsigned short i = 0; i < 839; ++i)
       thePerm839[i] = invert(839, 1, i, perms[839]);
    for (unsigned short i = 0; i < 853; ++i)
       thePerm853[i] = invert(853, 1, i, perms[853]);
    for (unsigned short i = 0; i < 857; ++i)
       thePerm857[i] = invert(857, 1, i, perms[857]);
    for (unsigned short i = 0; i < 859; ++i)
       thePerm859[i] = invert(859, 1, i, perms[859]);
    for (unsigned short i = 0; i < 863; ++i)
       thePerm863[i] = invert(863, 1, i, perms[863]);
    for (unsigned short i = 0; i < 877; ++i)
       thePerm877[i] = invert(877, 1, i, perms[877]);
    for (unsigned short i = 0; i < 881; ++i)
       thePerm881[i] = invert(881, 1, i, perms[881]);
    for (unsigned short i = 0; i < 883; ++i)
       thePerm883[i] = invert(883, 1, i, perms[883]);
    for (unsigned short i = 0; i < 887; ++i)
       thePerm887[i] = invert(887, 1, i, perms[887]);
    for (unsigned short i = 0; i < 907; ++i)
       thePerm907[i] = invert(907, 1, i, perms[907]);
    for (unsigned short i = 0; i < 911; ++i)
       thePerm911[i] = invert(911, 1, i, perms[911]);
    for (unsigned short i = 0; i < 919; ++i)
       thePerm919[i] = invert(919, 1, i, perms[919]);
    for (unsigned short i = 0; i < 929; ++i)
       thePerm929[i] = invert(929, 1, i, perms[929]);
    for (unsigned short i = 0; i < 937; ++i)
       thePerm937[i] = invert(937, 1, i, perms[937]);
    for (unsigned short i = 0; i < 941; ++i)
       thePerm941[i] = invert(941, 1, i, perms[941]);
    for (unsigned short i = 0; i < 947; ++i)
       thePerm947[i] = invert(947, 1, i, perms[947]);
    for (unsigned short i = 0; i < 953; ++i)
       thePerm953[i] = invert(953, 1, i, perms[953]);
    for (unsigned short i = 0; i < 967; ++i)
       thePerm967[i] = invert(967, 1, i, perms[967]);
    for (unsigned short i = 0; i < 971; ++i)
       thePerm971[i] = invert(971, 1, i, perms[971]);
    for (unsigned short i = 0; i < 977; ++i)
       thePerm977[i] = invert(977, 1, i, perms[977]);
    for (unsigned short i = 0; i < 983; ++i)
       thePerm983[i] = invert(983, 1, i, perms[983]);
    for (unsigned short i = 0; i < 991; ++i)
       thePerm991[i] = invert(991, 1, i, perms[991]);
    for (unsigned short i = 0; i < 997; ++i)
       thePerm997[i] = invert(997, 1, i, perms[997]);
    for (unsigned short i = 0; i < 1009; ++i)
       thePerm1009[i] = invert(1009, 1, i, perms[1009]);
    for (unsigned short i = 0; i < 1013; ++i)
       thePerm1013[i] = invert(1013, 1, i, perms[1013]);
    for (unsigned short i = 0; i < 1019; ++i)
       thePerm1019[i] = invert(1019, 1, i, perms[1019]);
    for (unsigned short i = 0; i < 1021; ++i)
       thePerm1021[i] = invert(1021, 1, i, perms[1021]);
    for (unsigned short i = 0; i < 1031; ++i)
       thePerm1031[i] = invert(1031, 1, i, perms[1031]);
    for (unsigned short i = 0; i < 1033; ++i)
       thePerm1033[i] = invert(1033, 1, i, perms[1033]);
    for (unsigned short i = 0; i < 1039; ++i)
       thePerm1039[i] = invert(1039, 1, i, perms[1039]);
    for (unsigned short i = 0; i < 1049; ++i)
       thePerm1049[i] = invert(1049, 1, i, perms[1049]);
    for (unsigned short i = 0; i < 1051; ++i)
       thePerm1051[i] = invert(1051, 1, i, perms[1051]);
    for (unsigned short i = 0; i < 1061; ++i)
       thePerm1061[i] = invert(1061, 1, i, perms[1061]);
    for (unsigned short i = 0; i < 1063; ++i)
       thePerm1063[i] = invert(1063, 1, i, perms[1063]);
    for (unsigned short i = 0; i < 1069; ++i)
       thePerm1069[i] = invert(1069, 1, i, perms[1069]);
    for (unsigned short i = 0; i < 1087; ++i)
       thePerm1087[i] = invert(1087, 1, i, perms[1087]);
    for (unsigned short i = 0; i < 1091; ++i)
       thePerm1091[i] = invert(1091, 1, i, perms[1091]);
    for (unsigned short i = 0; i < 1093; ++i)
       thePerm1093[i] = invert(1093, 1, i, perms[1093]);
    for (unsigned short i = 0; i < 1097; ++i)
       thePerm1097[i] = invert(1097, 1, i, perms[1097]);
    for (unsigned short i = 0; i < 1103; ++i)
       thePerm1103[i] = invert(1103, 1, i, perms[1103]);
    for (unsigned short i = 0; i < 1109; ++i)
       thePerm1109[i] = invert(1109, 1, i, perms[1109]);
    for (unsigned short i = 0; i < 1117; ++i)
       thePerm1117[i] = invert(1117, 1, i, perms[1117]);
    for (unsigned short i = 0; i < 1123; ++i)
       thePerm1123[i] = invert(1123, 1, i, perms[1123]);
    for (unsigned short i = 0; i < 1129; ++i)
       thePerm1129[i] = invert(1129, 1, i, perms[1129]);
    for (unsigned short i = 0; i < 1151; ++i)
       thePerm1151[i] = invert(1151, 1, i, perms[1151]);
    for (unsigned short i = 0; i < 1153; ++i)
       thePerm1153[i] = invert(1153, 1, i, perms[1153]);
    for (unsigned short i = 0; i < 1163; ++i)
       thePerm1163[i] = invert(1163, 1, i, perms[1163]);
    for (unsigned short i = 0; i < 1171; ++i)
       thePerm1171[i] = invert(1171, 1, i, perms[1171]);
    for (unsigned short i = 0; i < 1181; ++i)
       thePerm1181[i] = invert(1181, 1, i, perms[1181]);
    for (unsigned short i = 0; i < 1187; ++i)
       thePerm1187[i] = invert(1187, 1, i, perms[1187]);
    for (unsigned short i = 0; i < 1193; ++i)
       thePerm1193[i] = invert(1193, 1, i, perms[1193]);
    for (unsigned short i = 0; i < 1201; ++i)
       thePerm1201[i] = invert(1201, 1, i, perms[1201]);
    for (unsigned short i = 0; i < 1213; ++i)
       thePerm1213[i] = invert(1213, 1, i, perms[1213]);
    for (unsigned short i = 0; i < 1217; ++i)
       thePerm1217[i] = invert(1217, 1, i, perms[1217]);
    for (unsigned short i = 0; i < 1223; ++i)
       thePerm1223[i] = invert(1223, 1, i, perms[1223]);
    for (unsigned short i = 0; i < 1229; ++i)
       thePerm1229[i] = invert(1229, 1, i, perms[1229]);
    for (unsigned short i = 0; i < 1231; ++i)
       thePerm1231[i] = invert(1231, 1, i, perms[1231]);
    for (unsigned short i = 0; i < 1237; ++i)
       thePerm1237[i] = invert(1237, 1, i, perms[1237]);
    for (unsigned short i = 0; i < 1249; ++i)
       thePerm1249[i] = invert(1249, 1, i, perms[1249]);
    for (unsigned short i = 0; i < 1259; ++i)
       thePerm1259[i] = invert(1259, 1, i, perms[1259]);
    for (unsigned short i = 0; i < 1277; ++i)
       thePerm1277[i] = invert(1277, 1, i, perms[1277]);
    for (unsigned short i = 0; i < 1279; ++i)
       thePerm1279[i] = invert(1279, 1, i, perms[1279]);
    for (unsigned short i = 0; i < 1283; ++i)
       thePerm1283[i] = invert(1283, 1, i, perms[1283]);
    for (unsigned short i = 0; i < 1289; ++i)
       thePerm1289[i] = invert(1289, 1, i, perms[1289]);
    for (unsigned short i = 0; i < 1291; ++i)
       thePerm1291[i] = invert(1291, 1, i, perms[1291]);
    for (unsigned short i = 0; i < 1297; ++i)
       thePerm1297[i] = invert(1297, 1, i, perms[1297]);
    for (unsigned short i = 0; i < 1301; ++i)
       thePerm1301[i] = invert(1301, 1, i, perms[1301]);
    for (unsigned short i = 0; i < 1303; ++i)
       thePerm1303[i] = invert(1303, 1, i, perms[1303]);
    for (unsigned short i = 0; i < 1307; ++i)
       thePerm1307[i] = invert(1307, 1, i, perms[1307]);
    for (unsigned short i = 0; i < 1319; ++i)
       thePerm1319[i] = invert(1319, 1, i, perms[1319]);
    for (unsigned short i = 0; i < 1321; ++i)
       thePerm1321[i] = invert(1321, 1, i, perms[1321]);
    for (unsigned short i = 0; i < 1327; ++i)
       thePerm1327[i] = invert(1327, 1, i, perms[1327]);
    for (unsigned short i = 0; i < 1361; ++i)
       thePerm1361[i] = invert(1361, 1, i, perms[1361]);
    for (unsigned short i = 0; i < 1367; ++i)
       thePerm1367[i] = invert(1367, 1, i, perms[1367]);
    for (unsigned short i = 0; i < 1373; ++i)
       thePerm1373[i] = invert(1373, 1, i, perms[1373]);
    for (unsigned short i = 0; i < 1381; ++i)
       thePerm1381[i] = invert(1381, 1, i, perms[1381]);
    for (unsigned short i = 0; i < 1399; ++i)
       thePerm1399[i] = invert(1399, 1, i, perms[1399]);
    for (unsigned short i = 0; i < 1409; ++i)
       thePerm1409[i] = invert(1409, 1, i, perms[1409]);
    for (unsigned short i = 0; i < 1423; ++i)
       thePerm1423[i] = invert(1423, 1, i, perms[1423]);
    for (unsigned short i = 0; i < 1427; ++i)
       thePerm1427[i] = invert(1427, 1, i, perms[1427]);
    for (unsigned short i = 0; i < 1429; ++i)
       thePerm1429[i] = invert(1429, 1, i, perms[1429]);
    for (unsigned short i = 0; i < 1433; ++i)
       thePerm1433[i] = invert(1433, 1, i, perms[1433]);
    for (unsigned short i = 0; i < 1439; ++i)
       thePerm1439[i] = invert(1439, 1, i, perms[1439]);
    for (unsigned short i = 0; i < 1447; ++i)
       thePerm1447[i] = invert(1447, 1, i, perms[1447]);
    for (unsigned short i = 0; i < 1451; ++i)
       thePerm1451[i] = invert(1451, 1, i, perms[1451]);
    for (unsigned short i = 0; i < 1453; ++i)
       thePerm1453[i] = invert(1453, 1, i, perms[1453]);
    for (unsigned short i = 0; i < 1459; ++i)
       thePerm1459[i] = invert(1459, 1, i, perms[1459]);
    for (unsigned short i = 0; i < 1471; ++i)
       thePerm1471[i] = invert(1471, 1, i, perms[1471]);
    for (unsigned short i = 0; i < 1481; ++i)
       thePerm1481[i] = invert(1481, 1, i, perms[1481]);
    for (unsigned short i = 0; i < 1483; ++i)
       thePerm1483[i] = invert(1483, 1, i, perms[1483]);
    for (unsigned short i = 0; i < 1487; ++i)
       thePerm1487[i] = invert(1487, 1, i, perms[1487]);
    for (unsigned short i = 0; i < 1489; ++i)
       thePerm1489[i] = invert(1489, 1, i, perms[1489]);
    for (unsigned short i = 0; i < 1493; ++i)
       thePerm1493[i] = invert(1493, 1, i, perms[1493]);
    for (unsigned short i = 0; i < 1499; ++i)
       thePerm1499[i] = invert(1499, 1, i, perms[1499]);
    for (unsigned short i = 0; i < 1511; ++i)
       thePerm1511[i] = invert(1511, 1, i, perms[1511]);
    for (unsigned short i = 0; i < 1523; ++i)
       thePerm1523[i] = invert(1523, 1, i, perms[1523]);
    for (unsigned short i = 0; i < 1531; ++i)
       thePerm1531[i] = invert(1531, 1, i, perms[1531]);
    for (unsigned short i = 0; i < 1543; ++i)
       thePerm1543[i] = invert(1543, 1, i, perms[1543]);
    for (unsigned short i = 0; i < 1549; ++i)
       thePerm1549[i] = invert(1549, 1, i, perms[1549]);
    for (unsigned short i = 0; i < 1553; ++i)
       thePerm1553[i] = invert(1553, 1, i, perms[1553]);
    for (unsigned short i = 0; i < 1559; ++i)
       thePerm1559[i] = invert(1559, 1, i, perms[1559]);
    for (unsigned short i = 0; i < 1567; ++i)
       thePerm1567[i] = invert(1567, 1, i, perms[1567]);
    for (unsigned short i = 0; i < 1571; ++i)
       thePerm1571[i] = invert(1571, 1, i, perms[1571]);
    for (unsigned short i = 0; i < 1579; ++i)
       thePerm1579[i] = invert(1579, 1, i, perms[1579]);
    for (unsigned short i = 0; i < 1583; ++i)
       thePerm1583[i] = invert(1583, 1, i, perms[1583]);
    for (unsigned short i = 0; i < 1597; ++i)
       thePerm1597[i] = invert(1597, 1, i, perms[1597]);
    for (unsigned short i = 0; i < 1601; ++i)
       thePerm1601[i] = invert(1601, 1, i, perms[1601]);
    for (unsigned short i = 0; i < 1607; ++i)
       thePerm1607[i] = invert(1607, 1, i, perms[1607]);
    for (unsigned short i = 0; i < 1609; ++i)
       thePerm1609[i] = invert(1609, 1, i, perms[1609]);
    for (unsigned short i = 0; i < 1613; ++i)
       thePerm1613[i] = invert(1613, 1, i, perms[1613]);
    for (unsigned short i = 0; i < 1619; ++i)
       thePerm1619[i] = invert(1619, 1, i, perms[1619]);
}

// Special case: radical inverse in base 2, with direct bit reversal.
float
BRAY_Halton::halton2(uint index)
{
    index = (index << 16) | (index >> 16);
    index = ((index & 0x00ff00ff) << 8) | ((index & 0xff00ff00) >> 8);
    index = ((index & 0x0f0f0f0f) << 4) | ((index & 0xf0f0f0f0) >> 4);
    index = ((index & 0x33333333) << 2) | ((index & 0xcccccccc) >> 2);
    index = ((index & 0x55555555) << 1) | ((index & 0xaaaaaaaa) >> 1);
    return index * theInv2p32;
}

float
BRAY_Halton::halton3(uint index)
{
    return (thePerm3[index % 243u] * 14348907u +
                thePerm3[(index / 243u) % 243u] * 59049u +
            thePerm3[(index / 59049u) % 243u] * 243u +
            thePerm3[(index / 14348907u) % 243u])
            * float(0x1.fffffcp-1 / 3486784401u); // Results in [0,1).
}

float
BRAY_Halton::halton5(uint index)
{
    return (thePerm5[index % 125u] * 1953125u +
                thePerm5[(index / 125u) % 125u] * 15625u +
            thePerm5[(index / 15625u) % 125u] * 125u +
            thePerm5[(index / 1953125u) % 125u])
            * float(0x1.fffffcp-1 / 244140625u); // Results in [0,1).
}

float
BRAY_Halton::halton7(uint index)
{
    return (thePerm7[index % 343u] * 117649u +
                thePerm7[(index / 343u) % 343u] * 343u +
            thePerm7[(index / 117649u) % 343u])
            * float(0x1.fffffcp-1 / 40353607u); // Results in [0,1).
}

float
BRAY_Halton::halton11(uint index)
{
    return (thePerm11[index % 121u] * 1771561u +
                thePerm11[(index / 121u) % 121u] * 14641u +
            thePerm11[(index / 14641u) % 121u] * 121u +
            thePerm11[(index / 1771561u) % 121u])
            * float(0x1.fffffcp-1 / 214358881u); // Results in [0,1).
}

float
BRAY_Halton::halton13(uint index)
{
    return (thePerm13[index % 169u] * 4826809u +
                thePerm13[(index / 169u) % 169u] * 28561u +
            thePerm13[(index / 28561u) % 169u] * 169u +
            thePerm13[(index / 4826809u) % 169u])
            * float(0x1.fffffcp-1 / 815730721u); // Results in [0,1).
}

float
BRAY_Halton::halton17(uint index)
{
    return (thePerm17[index % 289u] * 83521u +
                thePerm17[(index / 289u) % 289u] * 289u +
            thePerm17[(index / 83521u) % 289u])
            * float(0x1.fffffcp-1 / 24137569u); // Results in [0,1).
}

float
BRAY_Halton::halton19(uint index)
{
    return (thePerm19[index % 361u] * 130321u +
                thePerm19[(index / 361u) % 361u] * 361u +
            thePerm19[(index / 130321u) % 361u])
            * float(0x1.fffffcp-1 / 47045881u); // Results in [0,1).
}

float
BRAY_Halton::halton23(uint index)
{
    return (thePerm23[index % 23u] * 148035889u +
                thePerm23[(index / 23u) % 23u] * 6436343u +
            thePerm23[(index / 529u) % 23u] * 279841u +
            thePerm23[(index / 12167u) % 23u] * 12167u +
            thePerm23[(index / 279841u) % 23u] * 529u +
            thePerm23[(index / 6436343u) % 23u] * 23u +
            thePerm23[(index / 148035889u) % 23u])
            * float(0x1.fffffcp-1 / 3404825447u); // Results in [0,1).
}

float
BRAY_Halton::halton29(uint index)
{
    return (thePerm29[index % 29u] * 20511149u +
                thePerm29[(index / 29u) % 29u] * 707281u +
            thePerm29[(index / 841u) % 29u] * 24389u +
            thePerm29[(index / 24389u) % 29u] * 841u +
            thePerm29[(index / 707281u) % 29u] * 29u +
            thePerm29[(index / 20511149u) % 29u])
            * float(0x1.fffffcp-1 / 594823321u); // Results in [0,1).
}

float
BRAY_Halton::halton31(uint index)
{
    return (thePerm31[index % 31u] * 28629151u +
                thePerm31[(index / 31u) % 31u] * 923521u +
            thePerm31[(index / 961u) % 31u] * 29791u +
            thePerm31[(index / 29791u) % 31u] * 961u +
            thePerm31[(index / 923521u) % 31u] * 31u +
            thePerm31[(index / 28629151u) % 31u])
            * float(0x1.fffffcp-1 / 887503681u); // Results in [0,1).
}

float
BRAY_Halton::halton37(uint index)
{
    return (thePerm37[index % 37u] * 69343957u +
                thePerm37[(index / 37u) % 37u] * 1874161u +
            thePerm37[(index / 1369u) % 37u] * 50653u +
            thePerm37[(index / 50653u) % 37u] * 1369u +
            thePerm37[(index / 1874161u) % 37u] * 37u +
            thePerm37[(index / 69343957u) % 37u])
            * float(0x1.fffffcp-1 / 2565726409u); // Results in [0,1).
}

float
BRAY_Halton::halton41(uint index)
{
    return (thePerm41[index % 41u] * 2825761u +
                thePerm41[(index / 41u) % 41u] * 68921u +
            thePerm41[(index / 1681u) % 41u] * 1681u +
            thePerm41[(index / 68921u) % 41u] * 41u +
            thePerm41[(index / 2825761u) % 41u])
            * float(0x1.fffffcp-1 / 115856201u); // Results in [0,1).
}

float
BRAY_Halton::halton43(uint index)
{
    return (thePerm43[index % 43u] * 3418801u +
                thePerm43[(index / 43u) % 43u] * 79507u +
            thePerm43[(index / 1849u) % 43u] * 1849u +
            thePerm43[(index / 79507u) % 43u] * 43u +
            thePerm43[(index / 3418801u) % 43u])
            * float(0x1.fffffcp-1 / 147008443u); // Results in [0,1).
}

float
BRAY_Halton::halton47(uint index)
{
    return (thePerm47[index % 47u] * 4879681u +
                thePerm47[(index / 47u) % 47u] * 103823u +
            thePerm47[(index / 2209u) % 47u] * 2209u +
            thePerm47[(index / 103823u) % 47u] * 47u +
            thePerm47[(index / 4879681u) % 47u])
            * float(0x1.fffffcp-1 / 229345007u); // Results in [0,1).
}

float
BRAY_Halton::halton53(uint index)
{
    return (thePerm53[index % 53u] * 7890481u +
                thePerm53[(index / 53u) % 53u] * 148877u +
            thePerm53[(index / 2809u) % 53u] * 2809u +
            thePerm53[(index / 148877u) % 53u] * 53u +
            thePerm53[(index / 7890481u) % 53u])
            * float(0x1.fffffcp-1 / 418195493u); // Results in [0,1).
}

float
BRAY_Halton::halton59(uint index)
{
    return (thePerm59[index % 59u] * 12117361u +
                thePerm59[(index / 59u) % 59u] * 205379u +
            thePerm59[(index / 3481u) % 59u] * 3481u +
            thePerm59[(index / 205379u) % 59u] * 59u +
            thePerm59[(index / 12117361u) % 59u])
            * float(0x1.fffffcp-1 / 714924299u); // Results in [0,1).
}

float
BRAY_Halton::halton61(uint index)
{
    return (thePerm61[index % 61u] * 13845841u +
                thePerm61[(index / 61u) % 61u] * 226981u +
            thePerm61[(index / 3721u) % 61u] * 3721u +
            thePerm61[(index / 226981u) % 61u] * 61u +
            thePerm61[(index / 13845841u) % 61u])
            * float(0x1.fffffcp-1 / 844596301u); // Results in [0,1).
}

float
BRAY_Halton::halton67(uint index)
{
    return (thePerm67[index % 67u] * 20151121u +
                thePerm67[(index / 67u) % 67u] * 300763u +
            thePerm67[(index / 4489u) % 67u] * 4489u +
            thePerm67[(index / 300763u) % 67u] * 67u +
            thePerm67[(index / 20151121u) % 67u])
            * float(0x1.fffffcp-1 / 1350125107u); // Results in [0,1).
}

float
BRAY_Halton::halton71(uint index)
{
    return (thePerm71[index % 71u] * 25411681u +
                thePerm71[(index / 71u) % 71u] * 357911u +
            thePerm71[(index / 5041u) % 71u] * 5041u +
            thePerm71[(index / 357911u) % 71u] * 71u +
            thePerm71[(index / 25411681u) % 71u])
            * float(0x1.fffffcp-1 / 1804229351u); // Results in [0,1).
}

float
BRAY_Halton::halton73(uint index)
{
    return (thePerm73[index % 73u] * 28398241u +
                thePerm73[(index / 73u) % 73u] * 389017u +
            thePerm73[(index / 5329u) % 73u] * 5329u +
            thePerm73[(index / 389017u) % 73u] * 73u +
            thePerm73[(index / 28398241u) % 73u])
            * float(0x1.fffffcp-1 / 2073071593u); // Results in [0,1).
}

float
BRAY_Halton::halton79(uint index)
{
    return (thePerm79[index % 79u] * 38950081u +
                thePerm79[(index / 79u) % 79u] * 493039u +
            thePerm79[(index / 6241u) % 79u] * 6241u +
            thePerm79[(index / 493039u) % 79u] * 79u +
            thePerm79[(index / 38950081u) % 79u])
            * float(0x1.fffffcp-1 / 3077056399u); // Results in [0,1).
}

float
BRAY_Halton::halton83(uint index)
{
    return (thePerm83[index % 83u] * 47458321u +
                thePerm83[(index / 83u) % 83u] * 571787u +
            thePerm83[(index / 6889u) % 83u] * 6889u +
            thePerm83[(index / 571787u) % 83u] * 83u +
            thePerm83[(index / 47458321u) % 83u])
            * float(0x1.fffffcp-1 / 3939040643u); // Results in [0,1).
}

float
BRAY_Halton::halton89(uint index)
{
    return (thePerm89[index % 89u] * 704969u +
                thePerm89[(index / 89u) % 89u] * 7921u +
            thePerm89[(index / 7921u) % 89u] * 89u +
            thePerm89[(index / 704969u) % 89u])
            * float(0x1.fffffcp-1 / 62742241u); // Results in [0,1).
}

float
BRAY_Halton::halton97(uint index)
{
    return (thePerm97[index % 97u] * 912673u +
                thePerm97[(index / 97u) % 97u] * 9409u +
            thePerm97[(index / 9409u) % 97u] * 97u +
            thePerm97[(index / 912673u) % 97u])
            * float(0x1.fffffcp-1 / 88529281u); // Results in [0,1).
}

float
BRAY_Halton::halton101(uint index)
{
    return (thePerm101[index % 101u] * 1030301u +
                thePerm101[(index / 101u) % 101u] * 10201u +
            thePerm101[(index / 10201u) % 101u] * 101u +
            thePerm101[(index / 1030301u) % 101u])
            * float(0x1.fffffcp-1 / 104060401u); // Results in [0,1).
}

float
BRAY_Halton::halton103(uint index)
{
    return (thePerm103[index % 103u] * 1092727u +
                thePerm103[(index / 103u) % 103u] * 10609u +
            thePerm103[(index / 10609u) % 103u] * 103u +
            thePerm103[(index / 1092727u) % 103u])
            * float(0x1.fffffcp-1 / 112550881u); // Results in [0,1).
}

float
BRAY_Halton::halton107(uint index)
{
    return (thePerm107[index % 107u] * 1225043u +
                thePerm107[(index / 107u) % 107u] * 11449u +
            thePerm107[(index / 11449u) % 107u] * 107u +
            thePerm107[(index / 1225043u) % 107u])
            * float(0x1.fffffcp-1 / 131079601u); // Results in [0,1).
}

float
BRAY_Halton::halton109(uint index)
{
    return (thePerm109[index % 109u] * 1295029u +
                thePerm109[(index / 109u) % 109u] * 11881u +
            thePerm109[(index / 11881u) % 109u] * 109u +
            thePerm109[(index / 1295029u) % 109u])
            * float(0x1.fffffcp-1 / 141158161u); // Results in [0,1).
}

float
BRAY_Halton::halton113(uint index)
{
    return (thePerm113[index % 113u] * 1442897u +
                thePerm113[(index / 113u) % 113u] * 12769u +
            thePerm113[(index / 12769u) % 113u] * 113u +
            thePerm113[(index / 1442897u) % 113u])
            * float(0x1.fffffcp-1 / 163047361u); // Results in [0,1).
}

float
BRAY_Halton::halton127(uint index)
{
    return (thePerm127[index % 127u] * 2048383u +
                thePerm127[(index / 127u) % 127u] * 16129u +
            thePerm127[(index / 16129u) % 127u] * 127u +
            thePerm127[(index / 2048383u) % 127u])
            * float(0x1.fffffcp-1 / 260144641u); // Results in [0,1).
}

float
BRAY_Halton::halton131(uint index)
{
    return (thePerm131[index % 131u] * 2248091u +
                thePerm131[(index / 131u) % 131u] * 17161u +
            thePerm131[(index / 17161u) % 131u] * 131u +
            thePerm131[(index / 2248091u) % 131u])
            * float(0x1.fffffcp-1 / 294499921u); // Results in [0,1).
}

float
BRAY_Halton::halton137(uint index)
{
    return (thePerm137[index % 137u] * 2571353u +
                thePerm137[(index / 137u) % 137u] * 18769u +
            thePerm137[(index / 18769u) % 137u] * 137u +
            thePerm137[(index / 2571353u) % 137u])
            * float(0x1.fffffcp-1 / 352275361u); // Results in [0,1).
}

float
BRAY_Halton::halton139(uint index)
{
    return (thePerm139[index % 139u] * 2685619u +
                thePerm139[(index / 139u) % 139u] * 19321u +
            thePerm139[(index / 19321u) % 139u] * 139u +
            thePerm139[(index / 2685619u) % 139u])
            * float(0x1.fffffcp-1 / 373301041u); // Results in [0,1).
}

float
BRAY_Halton::halton149(uint index)
{
    return (thePerm149[index % 149u] * 3307949u +
                thePerm149[(index / 149u) % 149u] * 22201u +
            thePerm149[(index / 22201u) % 149u] * 149u +
            thePerm149[(index / 3307949u) % 149u])
            * float(0x1.fffffcp-1 / 492884401u); // Results in [0,1).
}

float
BRAY_Halton::halton151(uint index)
{
    return (thePerm151[index % 151u] * 3442951u +
                thePerm151[(index / 151u) % 151u] * 22801u +
            thePerm151[(index / 22801u) % 151u] * 151u +
            thePerm151[(index / 3442951u) % 151u])
            * float(0x1.fffffcp-1 / 519885601u); // Results in [0,1).
}

float
BRAY_Halton::halton157(uint index)
{
    return (thePerm157[index % 157u] * 3869893u +
                thePerm157[(index / 157u) % 157u] * 24649u +
            thePerm157[(index / 24649u) % 157u] * 157u +
            thePerm157[(index / 3869893u) % 157u])
            * float(0x1.fffffcp-1 / 607573201u); // Results in [0,1).
}

float
BRAY_Halton::halton163(uint index)
{
    return (thePerm163[index % 163u] * 4330747u +
                thePerm163[(index / 163u) % 163u] * 26569u +
            thePerm163[(index / 26569u) % 163u] * 163u +
            thePerm163[(index / 4330747u) % 163u])
            * float(0x1.fffffcp-1 / 705911761u); // Results in [0,1).
}

float
BRAY_Halton::halton167(uint index)
{
    return (thePerm167[index % 167u] * 4657463u +
                thePerm167[(index / 167u) % 167u] * 27889u +
            thePerm167[(index / 27889u) % 167u] * 167u +
            thePerm167[(index / 4657463u) % 167u])
            * float(0x1.fffffcp-1 / 777796321u); // Results in [0,1).
}

float
BRAY_Halton::halton173(uint index)
{
    return (thePerm173[index % 173u] * 5177717u +
                thePerm173[(index / 173u) % 173u] * 29929u +
            thePerm173[(index / 29929u) % 173u] * 173u +
            thePerm173[(index / 5177717u) % 173u])
            * float(0x1.fffffcp-1 / 895745041u); // Results in [0,1).
}

float
BRAY_Halton::halton179(uint index)
{
    return (thePerm179[index % 179u] * 5735339u +
                thePerm179[(index / 179u) % 179u] * 32041u +
            thePerm179[(index / 32041u) % 179u] * 179u +
            thePerm179[(index / 5735339u) % 179u])
            * float(0x1.fffffcp-1 / 1026625681u); // Results in [0,1).
}

float
BRAY_Halton::halton181(uint index)
{
    return (thePerm181[index % 181u] * 5929741u +
                thePerm181[(index / 181u) % 181u] * 32761u +
            thePerm181[(index / 32761u) % 181u] * 181u +
            thePerm181[(index / 5929741u) % 181u])
            * float(0x1.fffffcp-1 / 1073283121u); // Results in [0,1).
}

float
BRAY_Halton::halton191(uint index)
{
    return (thePerm191[index % 191u] * 6967871u +
                thePerm191[(index / 191u) % 191u] * 36481u +
            thePerm191[(index / 36481u) % 191u] * 191u +
            thePerm191[(index / 6967871u) % 191u])
            * float(0x1.fffffcp-1 / 1330863361u); // Results in [0,1).
}

float
BRAY_Halton::halton193(uint index)
{
    return (thePerm193[index % 193u] * 7189057u +
                thePerm193[(index / 193u) % 193u] * 37249u +
            thePerm193[(index / 37249u) % 193u] * 193u +
            thePerm193[(index / 7189057u) % 193u])
            * float(0x1.fffffcp-1 / 1387488001u); // Results in [0,1).
}

float
BRAY_Halton::halton197(uint index)
{
    return (thePerm197[index % 197u] * 7645373u +
                thePerm197[(index / 197u) % 197u] * 38809u +
            thePerm197[(index / 38809u) % 197u] * 197u +
            thePerm197[(index / 7645373u) % 197u])
            * float(0x1.fffffcp-1 / 1506138481u); // Results in [0,1).
}

float
BRAY_Halton::halton199(uint index)
{
    return (thePerm199[index % 199u] * 7880599u +
                thePerm199[(index / 199u) % 199u] * 39601u +
            thePerm199[(index / 39601u) % 199u] * 199u +
            thePerm199[(index / 7880599u) % 199u])
            * float(0x1.fffffcp-1 / 1568239201u); // Results in [0,1).
}

float
BRAY_Halton::halton211(uint index)
{
    return (thePerm211[index % 211u] * 9393931u +
                thePerm211[(index / 211u) % 211u] * 44521u +
            thePerm211[(index / 44521u) % 211u] * 211u +
            thePerm211[(index / 9393931u) % 211u])
            * float(0x1.fffffcp-1 / 1982119441u); // Results in [0,1).
}

float
BRAY_Halton::halton223(uint index)
{
    return (thePerm223[index % 223u] * 11089567u +
                thePerm223[(index / 223u) % 223u] * 49729u +
            thePerm223[(index / 49729u) % 223u] * 223u +
            thePerm223[(index / 11089567u) % 223u])
            * float(0x1.fffffcp-1 / 2472973441u); // Results in [0,1).
}

float
BRAY_Halton::halton227(uint index)
{
    return (thePerm227[index % 227u] * 11697083u +
                thePerm227[(index / 227u) % 227u] * 51529u +
            thePerm227[(index / 51529u) % 227u] * 227u +
            thePerm227[(index / 11697083u) % 227u])
            * float(0x1.fffffcp-1 / 2655237841u); // Results in [0,1).
}

float
BRAY_Halton::halton229(uint index)
{
    return (thePerm229[index % 229u] * 12008989u +
                thePerm229[(index / 229u) % 229u] * 52441u +
            thePerm229[(index / 52441u) % 229u] * 229u +
            thePerm229[(index / 12008989u) % 229u])
            * float(0x1.fffffcp-1 / 2750058481u); // Results in [0,1).
}

float
BRAY_Halton::halton233(uint index)
{
    return (thePerm233[index % 233u] * 12649337u +
                thePerm233[(index / 233u) % 233u] * 54289u +
            thePerm233[(index / 54289u) % 233u] * 233u +
            thePerm233[(index / 12649337u) % 233u])
            * float(0x1.fffffcp-1 / 2947295521u); // Results in [0,1).
}

float
BRAY_Halton::halton239(uint index)
{
    return (thePerm239[index % 239u] * 13651919u +
                thePerm239[(index / 239u) % 239u] * 57121u +
            thePerm239[(index / 57121u) % 239u] * 239u +
            thePerm239[(index / 13651919u) % 239u])
            * float(0x1.fffffcp-1 / 3262808641u); // Results in [0,1).
}

float
BRAY_Halton::halton241(uint index)
{
    return (thePerm241[index % 241u] * 13997521u +
                thePerm241[(index / 241u) % 241u] * 58081u +
            thePerm241[(index / 58081u) % 241u] * 241u +
            thePerm241[(index / 13997521u) % 241u])
            * float(0x1.fffffcp-1 / 3373402561u); // Results in [0,1).
}

float
BRAY_Halton::halton251(uint index)
{
    return (thePerm251[index % 251u] * 15813251u +
                thePerm251[(index / 251u) % 251u] * 63001u +
            thePerm251[(index / 63001u) % 251u] * 251u +
            thePerm251[(index / 15813251u) % 251u])
            * float(0x1.fffffcp-1 / 3969126001u); // Results in [0,1).
}

float
BRAY_Halton::halton257(uint index)
{
    return (thePerm257[index % 257u] * 66049u +
                thePerm257[(index / 257u) % 257u] * 257u +
            thePerm257[(index / 66049u) % 257u])
            * float(0x1.fffffcp-1 / 16974593u); // Results in [0,1).
}

float
BRAY_Halton::halton263(uint index)
{
    return (thePerm263[index % 263u] * 69169u +
                thePerm263[(index / 263u) % 263u] * 263u +
            thePerm263[(index / 69169u) % 263u])
            * float(0x1.fffffcp-1 / 18191447u); // Results in [0,1).
}

float
BRAY_Halton::halton269(uint index)
{
    return (thePerm269[index % 269u] * 72361u +
                thePerm269[(index / 269u) % 269u] * 269u +
            thePerm269[(index / 72361u) % 269u])
            * float(0x1.fffffcp-1 / 19465109u); // Results in [0,1).
}

float
BRAY_Halton::halton271(uint index)
{
    return (thePerm271[index % 271u] * 73441u +
                thePerm271[(index / 271u) % 271u] * 271u +
            thePerm271[(index / 73441u) % 271u])
            * float(0x1.fffffcp-1 / 19902511u); // Results in [0,1).
}

float
BRAY_Halton::halton277(uint index)
{
    return (thePerm277[index % 277u] * 76729u +
                thePerm277[(index / 277u) % 277u] * 277u +
            thePerm277[(index / 76729u) % 277u])
            * float(0x1.fffffcp-1 / 21253933u); // Results in [0,1).
}

float
BRAY_Halton::halton281(uint index)
{
    return (thePerm281[index % 281u] * 78961u +
                thePerm281[(index / 281u) % 281u] * 281u +
            thePerm281[(index / 78961u) % 281u])
            * float(0x1.fffffcp-1 / 22188041u); // Results in [0,1).
}

float
BRAY_Halton::halton283(uint index)
{
    return (thePerm283[index % 283u] * 80089u +
                thePerm283[(index / 283u) % 283u] * 283u +
            thePerm283[(index / 80089u) % 283u])
            * float(0x1.fffffcp-1 / 22665187u); // Results in [0,1).
}

float
BRAY_Halton::halton293(uint index)
{
    return (thePerm293[index % 293u] * 85849u +
                thePerm293[(index / 293u) % 293u] * 293u +
            thePerm293[(index / 85849u) % 293u])
            * float(0x1.fffffcp-1 / 25153757u); // Results in [0,1).
}

float
BRAY_Halton::halton307(uint index)
{
    return (thePerm307[index % 307u] * 94249u +
                thePerm307[(index / 307u) % 307u] * 307u +
            thePerm307[(index / 94249u) % 307u])
            * float(0x1.fffffcp-1 / 28934443u); // Results in [0,1).
}

float
BRAY_Halton::halton311(uint index)
{
    return (thePerm311[index % 311u] * 96721u +
                thePerm311[(index / 311u) % 311u] * 311u +
            thePerm311[(index / 96721u) % 311u])
            * float(0x1.fffffcp-1 / 30080231u); // Results in [0,1).
}

float
BRAY_Halton::halton313(uint index)
{
    return (thePerm313[index % 313u] * 97969u +
                thePerm313[(index / 313u) % 313u] * 313u +
            thePerm313[(index / 97969u) % 313u])
            * float(0x1.fffffcp-1 / 30664297u); // Results in [0,1).
}

float
BRAY_Halton::halton317(uint index)
{
    return (thePerm317[index % 317u] * 100489u +
                thePerm317[(index / 317u) % 317u] * 317u +
            thePerm317[(index / 100489u) % 317u])
            * float(0x1.fffffcp-1 / 31855013u); // Results in [0,1).
}

float
BRAY_Halton::halton331(uint index)
{
    return (thePerm331[index % 331u] * 109561u +
                thePerm331[(index / 331u) % 331u] * 331u +
            thePerm331[(index / 109561u) % 331u])
            * float(0x1.fffffcp-1 / 36264691u); // Results in [0,1).
}

float
BRAY_Halton::halton337(uint index)
{
    return (thePerm337[index % 337u] * 113569u +
                thePerm337[(index / 337u) % 337u] * 337u +
            thePerm337[(index / 113569u) % 337u])
            * float(0x1.fffffcp-1 / 38272753u); // Results in [0,1).
}

float
BRAY_Halton::halton347(uint index)
{
    return (thePerm347[index % 347u] * 120409u +
                thePerm347[(index / 347u) % 347u] * 347u +
            thePerm347[(index / 120409u) % 347u])
            * float(0x1.fffffcp-1 / 41781923u); // Results in [0,1).
}

float
BRAY_Halton::halton349(uint index)
{
    return (thePerm349[index % 349u] * 121801u +
                thePerm349[(index / 349u) % 349u] * 349u +
            thePerm349[(index / 121801u) % 349u])
            * float(0x1.fffffcp-1 / 42508549u); // Results in [0,1).
}

float
BRAY_Halton::halton353(uint index)
{
    return (thePerm353[index % 353u] * 124609u +
                thePerm353[(index / 353u) % 353u] * 353u +
            thePerm353[(index / 124609u) % 353u])
            * float(0x1.fffffcp-1 / 43986977u); // Results in [0,1).
}

float
BRAY_Halton::halton359(uint index)
{
    return (thePerm359[index % 359u] * 128881u +
                thePerm359[(index / 359u) % 359u] * 359u +
            thePerm359[(index / 128881u) % 359u])
            * float(0x1.fffffcp-1 / 46268279u); // Results in [0,1).
}

float
BRAY_Halton::halton367(uint index)
{
    return (thePerm367[index % 367u] * 134689u +
                thePerm367[(index / 367u) % 367u] * 367u +
            thePerm367[(index / 134689u) % 367u])
            * float(0x1.fffffcp-1 / 49430863u); // Results in [0,1).
}

float
BRAY_Halton::halton373(uint index)
{
    return (thePerm373[index % 373u] * 139129u +
                thePerm373[(index / 373u) % 373u] * 373u +
            thePerm373[(index / 139129u) % 373u])
            * float(0x1.fffffcp-1 / 51895117u); // Results in [0,1).
}

float
BRAY_Halton::halton379(uint index)
{
    return (thePerm379[index % 379u] * 143641u +
                thePerm379[(index / 379u) % 379u] * 379u +
            thePerm379[(index / 143641u) % 379u])
            * float(0x1.fffffcp-1 / 54439939u); // Results in [0,1).
}

float
BRAY_Halton::halton383(uint index)
{
    return (thePerm383[index % 383u] * 146689u +
                thePerm383[(index / 383u) % 383u] * 383u +
            thePerm383[(index / 146689u) % 383u])
            * float(0x1.fffffcp-1 / 56181887u); // Results in [0,1).
}

float
BRAY_Halton::halton389(uint index)
{
    return (thePerm389[index % 389u] * 151321u +
                thePerm389[(index / 389u) % 389u] * 389u +
            thePerm389[(index / 151321u) % 389u])
            * float(0x1.fffffcp-1 / 58863869u); // Results in [0,1).
}

float
BRAY_Halton::halton397(uint index)
{
    return (thePerm397[index % 397u] * 157609u +
                thePerm397[(index / 397u) % 397u] * 397u +
            thePerm397[(index / 157609u) % 397u])
            * float(0x1.fffffcp-1 / 62570773u); // Results in [0,1).
}

float
BRAY_Halton::halton401(uint index)
{
    return (thePerm401[index % 401u] * 160801u +
                thePerm401[(index / 401u) % 401u] * 401u +
            thePerm401[(index / 160801u) % 401u])
            * float(0x1.fffffcp-1 / 64481201u); // Results in [0,1).
}

float
BRAY_Halton::halton409(uint index)
{
    return (thePerm409[index % 409u] * 167281u +
                thePerm409[(index / 409u) % 409u] * 409u +
            thePerm409[(index / 167281u) % 409u])
            * float(0x1.fffffcp-1 / 68417929u); // Results in [0,1).
}

float
BRAY_Halton::halton419(uint index)
{
    return (thePerm419[index % 419u] * 175561u +
                thePerm419[(index / 419u) % 419u] * 419u +
            thePerm419[(index / 175561u) % 419u])
            * float(0x1.fffffcp-1 / 73560059u); // Results in [0,1).
}

float
BRAY_Halton::halton421(uint index)
{
    return (thePerm421[index % 421u] * 177241u +
                thePerm421[(index / 421u) % 421u] * 421u +
            thePerm421[(index / 177241u) % 421u])
            * float(0x1.fffffcp-1 / 74618461u); // Results in [0,1).
}

float
BRAY_Halton::halton431(uint index)
{
    return (thePerm431[index % 431u] * 185761u +
                thePerm431[(index / 431u) % 431u] * 431u +
            thePerm431[(index / 185761u) % 431u])
            * float(0x1.fffffcp-1 / 80062991u); // Results in [0,1).
}

float
BRAY_Halton::halton433(uint index)
{
    return (thePerm433[index % 433u] * 187489u +
                thePerm433[(index / 433u) % 433u] * 433u +
            thePerm433[(index / 187489u) % 433u])
            * float(0x1.fffffcp-1 / 81182737u); // Results in [0,1).
}

float
BRAY_Halton::halton439(uint index)
{
    return (thePerm439[index % 439u] * 192721u +
                thePerm439[(index / 439u) % 439u] * 439u +
            thePerm439[(index / 192721u) % 439u])
            * float(0x1.fffffcp-1 / 84604519u); // Results in [0,1).
}

float
BRAY_Halton::halton443(uint index)
{
    return (thePerm443[index % 443u] * 196249u +
                thePerm443[(index / 443u) % 443u] * 443u +
            thePerm443[(index / 196249u) % 443u])
            * float(0x1.fffffcp-1 / 86938307u); // Results in [0,1).
}

float
BRAY_Halton::halton449(uint index)
{
    return (thePerm449[index % 449u] * 201601u +
                thePerm449[(index / 449u) % 449u] * 449u +
            thePerm449[(index / 201601u) % 449u])
            * float(0x1.fffffcp-1 / 90518849u); // Results in [0,1).
}

float
BRAY_Halton::halton457(uint index)
{
    return (thePerm457[index % 457u] * 208849u +
                thePerm457[(index / 457u) % 457u] * 457u +
            thePerm457[(index / 208849u) % 457u])
            * float(0x1.fffffcp-1 / 95443993u); // Results in [0,1).
}

float
BRAY_Halton::halton461(uint index)
{
    return (thePerm461[index % 461u] * 212521u +
                thePerm461[(index / 461u) % 461u] * 461u +
            thePerm461[(index / 212521u) % 461u])
            * float(0x1.fffffcp-1 / 97972181u); // Results in [0,1).
}

float
BRAY_Halton::halton463(uint index)
{
    return (thePerm463[index % 463u] * 214369u +
                thePerm463[(index / 463u) % 463u] * 463u +
            thePerm463[(index / 214369u) % 463u])
            * float(0x1.fffffcp-1 / 99252847u); // Results in [0,1).
}

float
BRAY_Halton::halton467(uint index)
{
    return (thePerm467[index % 467u] * 218089u +
                thePerm467[(index / 467u) % 467u] * 467u +
            thePerm467[(index / 218089u) % 467u])
            * float(0x1.fffffcp-1 / 101847563u); // Results in [0,1).
}

float
BRAY_Halton::halton479(uint index)
{
    return (thePerm479[index % 479u] * 229441u +
                thePerm479[(index / 479u) % 479u] * 479u +
            thePerm479[(index / 229441u) % 479u])
            * float(0x1.fffffcp-1 / 109902239u); // Results in [0,1).
}

float
BRAY_Halton::halton487(uint index)
{
    return (thePerm487[index % 487u] * 237169u +
                thePerm487[(index / 487u) % 487u] * 487u +
            thePerm487[(index / 237169u) % 487u])
            * float(0x1.fffffcp-1 / 115501303u); // Results in [0,1).
}

float
BRAY_Halton::halton491(uint index)
{
    return (thePerm491[index % 491u] * 241081u +
                thePerm491[(index / 491u) % 491u] * 491u +
            thePerm491[(index / 241081u) % 491u])
            * float(0x1.fffffcp-1 / 118370771u); // Results in [0,1).
}

float
BRAY_Halton::halton499(uint index)
{
    return (thePerm499[index % 499u] * 249001u +
                thePerm499[(index / 499u) % 499u] * 499u +
            thePerm499[(index / 249001u) % 499u])
            * float(0x1.fffffcp-1 / 124251499u); // Results in [0,1).
}

float
BRAY_Halton::halton503(uint index)
{
    return (thePerm503[index % 503u] * 253009u +
                thePerm503[(index / 503u) % 503u] * 503u +
            thePerm503[(index / 253009u) % 503u])
            * float(0x1.fffffcp-1 / 127263527u); // Results in [0,1).
}

float
BRAY_Halton::halton509(uint index)
{
    return (thePerm509[index % 509u] * 259081u +
                thePerm509[(index / 509u) % 509u] * 509u +
            thePerm509[(index / 259081u) % 509u])
            * float(0x1.fffffcp-1 / 131872229u); // Results in [0,1).
}

float
BRAY_Halton::halton521(uint index)
{
    return (thePerm521[index % 521u] * 271441u +
                thePerm521[(index / 521u) % 521u] * 521u +
            thePerm521[(index / 271441u) % 521u])
            * float(0x1.fffffcp-1 / 141420761u); // Results in [0,1).
}

float
BRAY_Halton::halton523(uint index)
{
    return (thePerm523[index % 523u] * 273529u +
                thePerm523[(index / 523u) % 523u] * 523u +
            thePerm523[(index / 273529u) % 523u])
            * float(0x1.fffffcp-1 / 143055667u); // Results in [0,1).
}

float
BRAY_Halton::halton541(uint index)
{
    return (thePerm541[index % 541u] * 292681u +
                thePerm541[(index / 541u) % 541u] * 541u +
            thePerm541[(index / 292681u) % 541u])
            * float(0x1.fffffcp-1 / 158340421u); // Results in [0,1).
}

float
BRAY_Halton::halton547(uint index)
{
    return (thePerm547[index % 547u] * 299209u +
                thePerm547[(index / 547u) % 547u] * 547u +
            thePerm547[(index / 299209u) % 547u])
            * float(0x1.fffffcp-1 / 163667323u); // Results in [0,1).
}

float
BRAY_Halton::halton557(uint index)
{
    return (thePerm557[index % 557u] * 310249u +
                thePerm557[(index / 557u) % 557u] * 557u +
            thePerm557[(index / 310249u) % 557u])
            * float(0x1.fffffcp-1 / 172808693u); // Results in [0,1).
}

float
BRAY_Halton::halton563(uint index)
{
    return (thePerm563[index % 563u] * 316969u +
                thePerm563[(index / 563u) % 563u] * 563u +
            thePerm563[(index / 316969u) % 563u])
            * float(0x1.fffffcp-1 / 178453547u); // Results in [0,1).
}

float
BRAY_Halton::halton569(uint index)
{
    return (thePerm569[index % 569u] * 323761u +
                thePerm569[(index / 569u) % 569u] * 569u +
            thePerm569[(index / 323761u) % 569u])
            * float(0x1.fffffcp-1 / 184220009u); // Results in [0,1).
}

float
BRAY_Halton::halton571(uint index)
{
    return (thePerm571[index % 571u] * 326041u +
                thePerm571[(index / 571u) % 571u] * 571u +
            thePerm571[(index / 326041u) % 571u])
            * float(0x1.fffffcp-1 / 186169411u); // Results in [0,1).
}

float
BRAY_Halton::halton577(uint index)
{
    return (thePerm577[index % 577u] * 332929u +
                thePerm577[(index / 577u) % 577u] * 577u +
            thePerm577[(index / 332929u) % 577u])
            * float(0x1.fffffcp-1 / 192100033u); // Results in [0,1).
}

float
BRAY_Halton::halton587(uint index)
{
    return (thePerm587[index % 587u] * 344569u +
                thePerm587[(index / 587u) % 587u] * 587u +
            thePerm587[(index / 344569u) % 587u])
            * float(0x1.fffffcp-1 / 202262003u); // Results in [0,1).
}

float
BRAY_Halton::halton593(uint index)
{
    return (thePerm593[index % 593u] * 351649u +
                thePerm593[(index / 593u) % 593u] * 593u +
            thePerm593[(index / 351649u) % 593u])
            * float(0x1.fffffcp-1 / 208527857u); // Results in [0,1).
}

float
BRAY_Halton::halton599(uint index)
{
    return (thePerm599[index % 599u] * 358801u +
                thePerm599[(index / 599u) % 599u] * 599u +
            thePerm599[(index / 358801u) % 599u])
            * float(0x1.fffffcp-1 / 214921799u); // Results in [0,1).
}

float
BRAY_Halton::halton601(uint index)
{
    return (thePerm601[index % 601u] * 361201u +
                thePerm601[(index / 601u) % 601u] * 601u +
            thePerm601[(index / 361201u) % 601u])
            * float(0x1.fffffcp-1 / 217081801u); // Results in [0,1).
}

float
BRAY_Halton::halton607(uint index)
{
    return (thePerm607[index % 607u] * 368449u +
                thePerm607[(index / 607u) % 607u] * 607u +
            thePerm607[(index / 368449u) % 607u])
            * float(0x1.fffffcp-1 / 223648543u); // Results in [0,1).
}

float
BRAY_Halton::halton613(uint index)
{
    return (thePerm613[index % 613u] * 375769u +
                thePerm613[(index / 613u) % 613u] * 613u +
            thePerm613[(index / 375769u) % 613u])
            * float(0x1.fffffcp-1 / 230346397u); // Results in [0,1).
}

float
BRAY_Halton::halton617(uint index)
{
    return (thePerm617[index % 617u] * 380689u +
                thePerm617[(index / 617u) % 617u] * 617u +
            thePerm617[(index / 380689u) % 617u])
            * float(0x1.fffffcp-1 / 234885113u); // Results in [0,1).
}

float
BRAY_Halton::halton619(uint index)
{
    return (thePerm619[index % 619u] * 383161u +
                thePerm619[(index / 619u) % 619u] * 619u +
            thePerm619[(index / 383161u) % 619u])
            * float(0x1.fffffcp-1 / 237176659u); // Results in [0,1).
}

float
BRAY_Halton::halton631(uint index)
{
    return (thePerm631[index % 631u] * 398161u +
                thePerm631[(index / 631u) % 631u] * 631u +
            thePerm631[(index / 398161u) % 631u])
            * float(0x1.fffffcp-1 / 251239591u); // Results in [0,1).
}

float
BRAY_Halton::halton641(uint index)
{
    return (thePerm641[index % 641u] * 410881u +
                thePerm641[(index / 641u) % 641u] * 641u +
            thePerm641[(index / 410881u) % 641u])
            * float(0x1.fffffcp-1 / 263374721u); // Results in [0,1).
}

float
BRAY_Halton::halton643(uint index)
{
    return (thePerm643[index % 643u] * 413449u +
                thePerm643[(index / 643u) % 643u] * 643u +
            thePerm643[(index / 413449u) % 643u])
            * float(0x1.fffffcp-1 / 265847707u); // Results in [0,1).
}

float
BRAY_Halton::halton647(uint index)
{
    return (thePerm647[index % 647u] * 418609u +
                thePerm647[(index / 647u) % 647u] * 647u +
            thePerm647[(index / 418609u) % 647u])
            * float(0x1.fffffcp-1 / 270840023u); // Results in [0,1).
}

float
BRAY_Halton::halton653(uint index)
{
    return (thePerm653[index % 653u] * 426409u +
                thePerm653[(index / 653u) % 653u] * 653u +
            thePerm653[(index / 426409u) % 653u])
            * float(0x1.fffffcp-1 / 278445077u); // Results in [0,1).
}

float
BRAY_Halton::halton659(uint index)
{
    return (thePerm659[index % 659u] * 434281u +
                thePerm659[(index / 659u) % 659u] * 659u +
            thePerm659[(index / 434281u) % 659u])
            * float(0x1.fffffcp-1 / 286191179u); // Results in [0,1).
}

float
BRAY_Halton::halton661(uint index)
{
    return (thePerm661[index % 661u] * 436921u +
                thePerm661[(index / 661u) % 661u] * 661u +
            thePerm661[(index / 436921u) % 661u])
            * float(0x1.fffffcp-1 / 288804781u); // Results in [0,1).
}

float
BRAY_Halton::halton673(uint index)
{
    return (thePerm673[index % 673u] * 452929u +
                thePerm673[(index / 673u) % 673u] * 673u +
            thePerm673[(index / 452929u) % 673u])
            * float(0x1.fffffcp-1 / 304821217u); // Results in [0,1).
}

float
BRAY_Halton::halton677(uint index)
{
    return (thePerm677[index % 677u] * 458329u +
                thePerm677[(index / 677u) % 677u] * 677u +
            thePerm677[(index / 458329u) % 677u])
            * float(0x1.fffffcp-1 / 310288733u); // Results in [0,1).
}

float
BRAY_Halton::halton683(uint index)
{
    return (thePerm683[index % 683u] * 466489u +
                thePerm683[(index / 683u) % 683u] * 683u +
            thePerm683[(index / 466489u) % 683u])
            * float(0x1.fffffcp-1 / 318611987u); // Results in [0,1).
}

float
BRAY_Halton::halton691(uint index)
{
    return (thePerm691[index % 691u] * 477481u +
                thePerm691[(index / 691u) % 691u] * 691u +
            thePerm691[(index / 477481u) % 691u])
            * float(0x1.fffffcp-1 / 329939371u); // Results in [0,1).
}

float
BRAY_Halton::halton701(uint index)
{
    return (thePerm701[index % 701u] * 491401u +
                thePerm701[(index / 701u) % 701u] * 701u +
            thePerm701[(index / 491401u) % 701u])
            * float(0x1.fffffcp-1 / 344472101u); // Results in [0,1).
}

float
BRAY_Halton::halton709(uint index)
{
    return (thePerm709[index % 709u] * 502681u +
                thePerm709[(index / 709u) % 709u] * 709u +
            thePerm709[(index / 502681u) % 709u])
            * float(0x1.fffffcp-1 / 356400829u); // Results in [0,1).
}

float
BRAY_Halton::halton719(uint index)
{
    return (thePerm719[index % 719u] * 516961u +
                thePerm719[(index / 719u) % 719u] * 719u +
            thePerm719[(index / 516961u) % 719u])
            * float(0x1.fffffcp-1 / 371694959u); // Results in [0,1).
}

float
BRAY_Halton::halton727(uint index)
{
    return (thePerm727[index % 727u] * 528529u +
                thePerm727[(index / 727u) % 727u] * 727u +
            thePerm727[(index / 528529u) % 727u])
            * float(0x1.fffffcp-1 / 384240583u); // Results in [0,1).
}

float
BRAY_Halton::halton733(uint index)
{
    return (thePerm733[index % 733u] * 537289u +
                thePerm733[(index / 733u) % 733u] * 733u +
            thePerm733[(index / 537289u) % 733u])
            * float(0x1.fffffcp-1 / 393832837u); // Results in [0,1).
}

float
BRAY_Halton::halton739(uint index)
{
    return (thePerm739[index % 739u] * 546121u +
                thePerm739[(index / 739u) % 739u] * 739u +
            thePerm739[(index / 546121u) % 739u])
            * float(0x1.fffffcp-1 / 403583419u); // Results in [0,1).
}

float
BRAY_Halton::halton743(uint index)
{
    return (thePerm743[index % 743u] * 552049u +
                thePerm743[(index / 743u) % 743u] * 743u +
            thePerm743[(index / 552049u) % 743u])
            * float(0x1.fffffcp-1 / 410172407u); // Results in [0,1).
}

float
BRAY_Halton::halton751(uint index)
{
    return (thePerm751[index % 751u] * 564001u +
                thePerm751[(index / 751u) % 751u] * 751u +
            thePerm751[(index / 564001u) % 751u])
            * float(0x1.fffffcp-1 / 423564751u); // Results in [0,1).
}

float
BRAY_Halton::halton757(uint index)
{
    return (thePerm757[index % 757u] * 573049u +
                thePerm757[(index / 757u) % 757u] * 757u +
            thePerm757[(index / 573049u) % 757u])
            * float(0x1.fffffcp-1 / 433798093u); // Results in [0,1).
}

float
BRAY_Halton::halton761(uint index)
{
    return (thePerm761[index % 761u] * 579121u +
                thePerm761[(index / 761u) % 761u] * 761u +
            thePerm761[(index / 579121u) % 761u])
            * float(0x1.fffffcp-1 / 440711081u); // Results in [0,1).
}

float
BRAY_Halton::halton769(uint index)
{
    return (thePerm769[index % 769u] * 591361u +
                thePerm769[(index / 769u) % 769u] * 769u +
            thePerm769[(index / 591361u) % 769u])
            * float(0x1.fffffcp-1 / 454756609u); // Results in [0,1).
}

float
BRAY_Halton::halton773(uint index)
{
    return (thePerm773[index % 773u] * 597529u +
                thePerm773[(index / 773u) % 773u] * 773u +
            thePerm773[(index / 597529u) % 773u])
            * float(0x1.fffffcp-1 / 461889917u); // Results in [0,1).
}

float
BRAY_Halton::halton787(uint index)
{
    return (thePerm787[index % 787u] * 619369u +
                thePerm787[(index / 787u) % 787u] * 787u +
            thePerm787[(index / 619369u) % 787u])
            * float(0x1.fffffcp-1 / 487443403u); // Results in [0,1).
}

float
BRAY_Halton::halton797(uint index)
{
    return (thePerm797[index % 797u] * 635209u +
                thePerm797[(index / 797u) % 797u] * 797u +
            thePerm797[(index / 635209u) % 797u])
            * float(0x1.fffffcp-1 / 506261573u); // Results in [0,1).
}

float
BRAY_Halton::halton809(uint index)
{
    return (thePerm809[index % 809u] * 654481u +
                thePerm809[(index / 809u) % 809u] * 809u +
            thePerm809[(index / 654481u) % 809u])
            * float(0x1.fffffcp-1 / 529475129u); // Results in [0,1).
}

float
BRAY_Halton::halton811(uint index)
{
    return (thePerm811[index % 811u] * 657721u +
                thePerm811[(index / 811u) % 811u] * 811u +
            thePerm811[(index / 657721u) % 811u])
            * float(0x1.fffffcp-1 / 533411731u); // Results in [0,1).
}

float
BRAY_Halton::halton821(uint index)
{
    return (thePerm821[index % 821u] * 674041u +
                thePerm821[(index / 821u) % 821u] * 821u +
            thePerm821[(index / 674041u) % 821u])
            * float(0x1.fffffcp-1 / 553387661u); // Results in [0,1).
}

float
BRAY_Halton::halton823(uint index)
{
    return (thePerm823[index % 823u] * 677329u +
                thePerm823[(index / 823u) % 823u] * 823u +
            thePerm823[(index / 677329u) % 823u])
            * float(0x1.fffffcp-1 / 557441767u); // Results in [0,1).
}

float
BRAY_Halton::halton827(uint index)
{
    return (thePerm827[index % 827u] * 683929u +
                thePerm827[(index / 827u) % 827u] * 827u +
            thePerm827[(index / 683929u) % 827u])
            * float(0x1.fffffcp-1 / 565609283u); // Results in [0,1).
}

float
BRAY_Halton::halton829(uint index)
{
    return (thePerm829[index % 829u] * 687241u +
                thePerm829[(index / 829u) % 829u] * 829u +
            thePerm829[(index / 687241u) % 829u])
            * float(0x1.fffffcp-1 / 569722789u); // Results in [0,1).
}

float
BRAY_Halton::halton839(uint index)
{
    return (thePerm839[index % 839u] * 703921u +
                thePerm839[(index / 839u) % 839u] * 839u +
            thePerm839[(index / 703921u) % 839u])
            * float(0x1.fffffcp-1 / 590589719u); // Results in [0,1).
}

float
BRAY_Halton::halton853(uint index)
{
    return (thePerm853[index % 853u] * 727609u +
                thePerm853[(index / 853u) % 853u] * 853u +
            thePerm853[(index / 727609u) % 853u])
            * float(0x1.fffffcp-1 / 620650477u); // Results in [0,1).
}

float
BRAY_Halton::halton857(uint index)
{
    return (thePerm857[index % 857u] * 734449u +
                thePerm857[(index / 857u) % 857u] * 857u +
            thePerm857[(index / 734449u) % 857u])
            * float(0x1.fffffcp-1 / 629422793u); // Results in [0,1).
}

float
BRAY_Halton::halton859(uint index)
{
    return (thePerm859[index % 859u] * 737881u +
                thePerm859[(index / 859u) % 859u] * 859u +
            thePerm859[(index / 737881u) % 859u])
            * float(0x1.fffffcp-1 / 633839779u); // Results in [0,1).
}

float
BRAY_Halton::halton863(uint index)
{
    return (thePerm863[index % 863u] * 744769u +
                thePerm863[(index / 863u) % 863u] * 863u +
            thePerm863[(index / 744769u) % 863u])
            * float(0x1.fffffcp-1 / 642735647u); // Results in [0,1).
}

float
BRAY_Halton::halton877(uint index)
{
    return (thePerm877[index % 877u] * 769129u +
                thePerm877[(index / 877u) % 877u] * 877u +
            thePerm877[(index / 769129u) % 877u])
            * float(0x1.fffffcp-1 / 674526133u); // Results in [0,1).
}

float
BRAY_Halton::halton881(uint index)
{
    return (thePerm881[index % 881u] * 776161u +
                thePerm881[(index / 881u) % 881u] * 881u +
            thePerm881[(index / 776161u) % 881u])
            * float(0x1.fffffcp-1 / 683797841u); // Results in [0,1).
}

float
BRAY_Halton::halton883(uint index)
{
    return (thePerm883[index % 883u] * 779689u +
                thePerm883[(index / 883u) % 883u] * 883u +
            thePerm883[(index / 779689u) % 883u])
            * float(0x1.fffffcp-1 / 688465387u); // Results in [0,1).
}

float
BRAY_Halton::halton887(uint index)
{
    return (thePerm887[index % 887u] * 786769u +
                thePerm887[(index / 887u) % 887u] * 887u +
            thePerm887[(index / 786769u) % 887u])
            * float(0x1.fffffcp-1 / 697864103u); // Results in [0,1).
}

float
BRAY_Halton::halton907(uint index)
{
    return (thePerm907[index % 907u] * 822649u +
                thePerm907[(index / 907u) % 907u] * 907u +
            thePerm907[(index / 822649u) % 907u])
            * float(0x1.fffffcp-1 / 746142643u); // Results in [0,1).
}

float
BRAY_Halton::halton911(uint index)
{
    return (thePerm911[index % 911u] * 829921u +
                thePerm911[(index / 911u) % 911u] * 911u +
            thePerm911[(index / 829921u) % 911u])
            * float(0x1.fffffcp-1 / 756058031u); // Results in [0,1).
}

float
BRAY_Halton::halton919(uint index)
{
    return (thePerm919[index % 919u] * 844561u +
                thePerm919[(index / 919u) % 919u] * 919u +
            thePerm919[(index / 844561u) % 919u])
            * float(0x1.fffffcp-1 / 776151559u); // Results in [0,1).
}

float
BRAY_Halton::halton929(uint index)
{
    return (thePerm929[index % 929u] * 863041u +
                thePerm929[(index / 929u) % 929u] * 929u +
            thePerm929[(index / 863041u) % 929u])
            * float(0x1.fffffcp-1 / 801765089u); // Results in [0,1).
}

float
BRAY_Halton::halton937(uint index)
{
    return (thePerm937[index % 937u] * 877969u +
                thePerm937[(index / 937u) % 937u] * 937u +
            thePerm937[(index / 877969u) % 937u])
            * float(0x1.fffffcp-1 / 822656953u); // Results in [0,1).
}

float
BRAY_Halton::halton941(uint index)
{
    return (thePerm941[index % 941u] * 885481u +
                thePerm941[(index / 941u) % 941u] * 941u +
            thePerm941[(index / 885481u) % 941u])
            * float(0x1.fffffcp-1 / 833237621u); // Results in [0,1).
}

float
BRAY_Halton::halton947(uint index)
{
    return (thePerm947[index % 947u] * 896809u +
                thePerm947[(index / 947u) % 947u] * 947u +
            thePerm947[(index / 896809u) % 947u])
            * float(0x1.fffffcp-1 / 849278123u); // Results in [0,1).
}

float
BRAY_Halton::halton953(uint index)
{
    return (thePerm953[index % 953u] * 908209u +
                thePerm953[(index / 953u) % 953u] * 953u +
            thePerm953[(index / 908209u) % 953u])
            * float(0x1.fffffcp-1 / 865523177u); // Results in [0,1).
}

float
BRAY_Halton::halton967(uint index)
{
    return (thePerm967[index % 967u] * 935089u +
                thePerm967[(index / 967u) % 967u] * 967u +
            thePerm967[(index / 935089u) % 967u])
            * float(0x1.fffffcp-1 / 904231063u); // Results in [0,1).
}

float
BRAY_Halton::halton971(uint index)
{
    return (thePerm971[index % 971u] * 942841u +
                thePerm971[(index / 971u) % 971u] * 971u +
            thePerm971[(index / 942841u) % 971u])
            * float(0x1.fffffcp-1 / 915498611u); // Results in [0,1).
}

float
BRAY_Halton::halton977(uint index)
{
    return (thePerm977[index % 977u] * 954529u +
                thePerm977[(index / 977u) % 977u] * 977u +
            thePerm977[(index / 954529u) % 977u])
            * float(0x1.fffffcp-1 / 932574833u); // Results in [0,1).
}

float
BRAY_Halton::halton983(uint index)
{
    return (thePerm983[index % 983u] * 966289u +
                thePerm983[(index / 983u) % 983u] * 983u +
            thePerm983[(index / 966289u) % 983u])
            * float(0x1.fffffcp-1 / 949862087u); // Results in [0,1).
}

float
BRAY_Halton::halton991(uint index)
{
    return (thePerm991[index % 991u] * 982081u +
                thePerm991[(index / 991u) % 991u] * 991u +
            thePerm991[(index / 982081u) % 991u])
            * float(0x1.fffffcp-1 / 973242271u); // Results in [0,1).
}

float
BRAY_Halton::halton997(uint index)
{
    return (thePerm997[index % 997u] * 994009u +
                thePerm997[(index / 997u) % 997u] * 997u +
            thePerm997[(index / 994009u) % 997u])
            * float(0x1.fffffcp-1 / 991026973u); // Results in [0,1).
}

float
BRAY_Halton::halton1009(uint index)
{
    return (thePerm1009[index % 1009u] * 1018081u +
                thePerm1009[(index / 1009u) % 1009u] * 1009u +
            thePerm1009[(index / 1018081u) % 1009u])
            * float(0x1.fffffcp-1 / 1027243729u); // Results in [0,1).
}

float
BRAY_Halton::halton1013(uint index)
{
    return (thePerm1013[index % 1013u] * 1026169u +
                thePerm1013[(index / 1013u) % 1013u] * 1013u +
            thePerm1013[(index / 1026169u) % 1013u])
            * float(0x1.fffffcp-1 / 1039509197u); // Results in [0,1).
}

float
BRAY_Halton::halton1019(uint index)
{
    return (thePerm1019[index % 1019u] * 1038361u +
                thePerm1019[(index / 1019u) % 1019u] * 1019u +
            thePerm1019[(index / 1038361u) % 1019u])
            * float(0x1.fffffcp-1 / 1058089859u); // Results in [0,1).
}

float
BRAY_Halton::halton1021(uint index)
{
    return (thePerm1021[index % 1021u] * 1042441u +
                thePerm1021[(index / 1021u) % 1021u] * 1021u +
            thePerm1021[(index / 1042441u) % 1021u])
            * float(0x1.fffffcp-1 / 1064332261u); // Results in [0,1).
}

float
BRAY_Halton::halton1031(uint index)
{
    return (thePerm1031[index % 1031u] * 1062961u +
                thePerm1031[(index / 1031u) % 1031u] * 1031u +
            thePerm1031[(index / 1062961u) % 1031u])
            * float(0x1.fffffcp-1 / 1095912791u); // Results in [0,1).
}

float
BRAY_Halton::halton1033(uint index)
{
    return (thePerm1033[index % 1033u] * 1067089u +
                thePerm1033[(index / 1033u) % 1033u] * 1033u +
            thePerm1033[(index / 1067089u) % 1033u])
            * float(0x1.fffffcp-1 / 1102302937u); // Results in [0,1).
}

float
BRAY_Halton::halton1039(uint index)
{
    return (thePerm1039[index % 1039u] * 1079521u +
                thePerm1039[(index / 1039u) % 1039u] * 1039u +
            thePerm1039[(index / 1079521u) % 1039u])
            * float(0x1.fffffcp-1 / 1121622319u); // Results in [0,1).
}

float
BRAY_Halton::halton1049(uint index)
{
    return (thePerm1049[index % 1049u] * 1100401u +
                thePerm1049[(index / 1049u) % 1049u] * 1049u +
            thePerm1049[(index / 1100401u) % 1049u])
            * float(0x1.fffffcp-1 / 1154320649u); // Results in [0,1).
}

float
BRAY_Halton::halton1051(uint index)
{
    return (thePerm1051[index % 1051u] * 1104601u +
                thePerm1051[(index / 1051u) % 1051u] * 1051u +
            thePerm1051[(index / 1104601u) % 1051u])
            * float(0x1.fffffcp-1 / 1160935651u); // Results in [0,1).
}

float
BRAY_Halton::halton1061(uint index)
{
    return (thePerm1061[index % 1061u] * 1125721u +
                thePerm1061[(index / 1061u) % 1061u] * 1061u +
            thePerm1061[(index / 1125721u) % 1061u])
            * float(0x1.fffffcp-1 / 1194389981u); // Results in [0,1).
}

float
BRAY_Halton::halton1063(uint index)
{
    return (thePerm1063[index % 1063u] * 1129969u +
                thePerm1063[(index / 1063u) % 1063u] * 1063u +
            thePerm1063[(index / 1129969u) % 1063u])
            * float(0x1.fffffcp-1 / 1201157047u); // Results in [0,1).
}

float
BRAY_Halton::halton1069(uint index)
{
    return (thePerm1069[index % 1069u] * 1142761u +
                thePerm1069[(index / 1069u) % 1069u] * 1069u +
            thePerm1069[(index / 1142761u) % 1069u])
            * float(0x1.fffffcp-1 / 1221611509u); // Results in [0,1).
}

float
BRAY_Halton::halton1087(uint index)
{
    return (thePerm1087[index % 1087u] * 1181569u +
                thePerm1087[(index / 1087u) % 1087u] * 1087u +
            thePerm1087[(index / 1181569u) % 1087u])
            * float(0x1.fffffcp-1 / 1284365503u); // Results in [0,1).
}

float
BRAY_Halton::halton1091(uint index)
{
    return (thePerm1091[index % 1091u] * 1190281u +
                thePerm1091[(index / 1091u) % 1091u] * 1091u +
            thePerm1091[(index / 1190281u) % 1091u])
            * float(0x1.fffffcp-1 / 1298596571u); // Results in [0,1).
}

float
BRAY_Halton::halton1093(uint index)
{
    return (thePerm1093[index % 1093u] * 1194649u +
                thePerm1093[(index / 1093u) % 1093u] * 1093u +
            thePerm1093[(index / 1194649u) % 1093u])
            * float(0x1.fffffcp-1 / 1305751357u); // Results in [0,1).
}

float
BRAY_Halton::halton1097(uint index)
{
    return (thePerm1097[index % 1097u] * 1203409u +
                thePerm1097[(index / 1097u) % 1097u] * 1097u +
            thePerm1097[(index / 1203409u) % 1097u])
            * float(0x1.fffffcp-1 / 1320139673u); // Results in [0,1).
}

float
BRAY_Halton::halton1103(uint index)
{
    return (thePerm1103[index % 1103u] * 1216609u +
                thePerm1103[(index / 1103u) % 1103u] * 1103u +
            thePerm1103[(index / 1216609u) % 1103u])
            * float(0x1.fffffcp-1 / 1341919727u); // Results in [0,1).
}

float
BRAY_Halton::halton1109(uint index)
{
    return (thePerm1109[index % 1109u] * 1229881u +
                thePerm1109[(index / 1109u) % 1109u] * 1109u +
            thePerm1109[(index / 1229881u) % 1109u])
            * float(0x1.fffffcp-1 / 1363938029u); // Results in [0,1).
}

float
BRAY_Halton::halton1117(uint index)
{
    return (thePerm1117[index % 1117u] * 1247689u +
                thePerm1117[(index / 1117u) % 1117u] * 1117u +
            thePerm1117[(index / 1247689u) % 1117u])
            * float(0x1.fffffcp-1 / 1393668613u); // Results in [0,1).
}

float
BRAY_Halton::halton1123(uint index)
{
    return (thePerm1123[index % 1123u] * 1261129u +
                thePerm1123[(index / 1123u) % 1123u] * 1123u +
            thePerm1123[(index / 1261129u) % 1123u])
            * float(0x1.fffffcp-1 / 1416247867u); // Results in [0,1).
}

float
BRAY_Halton::halton1129(uint index)
{
    return (thePerm1129[index % 1129u] * 1274641u +
                thePerm1129[(index / 1129u) % 1129u] * 1129u +
            thePerm1129[(index / 1274641u) % 1129u])
            * float(0x1.fffffcp-1 / 1439069689u); // Results in [0,1).
}

float
BRAY_Halton::halton1151(uint index)
{
    return (thePerm1151[index % 1151u] * 1324801u +
                thePerm1151[(index / 1151u) % 1151u] * 1151u +
            thePerm1151[(index / 1324801u) % 1151u])
            * float(0x1.fffffcp-1 / 1524845951u); // Results in [0,1).
}

float
BRAY_Halton::halton1153(uint index)
{
    return (thePerm1153[index % 1153u] * 1329409u +
                thePerm1153[(index / 1153u) % 1153u] * 1153u +
            thePerm1153[(index / 1329409u) % 1153u])
            * float(0x1.fffffcp-1 / 1532808577u); // Results in [0,1).
}

float
BRAY_Halton::halton1163(uint index)
{
    return (thePerm1163[index % 1163u] * 1352569u +
                thePerm1163[(index / 1163u) % 1163u] * 1163u +
            thePerm1163[(index / 1352569u) % 1163u])
            * float(0x1.fffffcp-1 / 1573037747u); // Results in [0,1).
}

float
BRAY_Halton::halton1171(uint index)
{
    return (thePerm1171[index % 1171u] * 1371241u +
                thePerm1171[(index / 1171u) % 1171u] * 1171u +
            thePerm1171[(index / 1371241u) % 1171u])
            * float(0x1.fffffcp-1 / 1605723211u); // Results in [0,1).
}

float
BRAY_Halton::halton1181(uint index)
{
    return (thePerm1181[index % 1181u] * 1394761u +
                thePerm1181[(index / 1181u) % 1181u] * 1181u +
            thePerm1181[(index / 1394761u) % 1181u])
            * float(0x1.fffffcp-1 / 1647212741u); // Results in [0,1).
}

float
BRAY_Halton::halton1187(uint index)
{
    return (thePerm1187[index % 1187u] * 1408969u +
                thePerm1187[(index / 1187u) % 1187u] * 1187u +
            thePerm1187[(index / 1408969u) % 1187u])
            * float(0x1.fffffcp-1 / 1672446203u); // Results in [0,1).
}

float
BRAY_Halton::halton1193(uint index)
{
    return (thePerm1193[index % 1193u] * 1423249u +
                thePerm1193[(index / 1193u) % 1193u] * 1193u +
            thePerm1193[(index / 1423249u) % 1193u])
            * float(0x1.fffffcp-1 / 1697936057u); // Results in [0,1).
}

float
BRAY_Halton::halton1201(uint index)
{
    return (thePerm1201[index % 1201u] * 1442401u +
                thePerm1201[(index / 1201u) % 1201u] * 1201u +
            thePerm1201[(index / 1442401u) % 1201u])
            * float(0x1.fffffcp-1 / 1732323601u); // Results in [0,1).
}

float
BRAY_Halton::halton1213(uint index)
{
    return (thePerm1213[index % 1213u] * 1471369u +
                thePerm1213[(index / 1213u) % 1213u] * 1213u +
            thePerm1213[(index / 1471369u) % 1213u])
            * float(0x1.fffffcp-1 / 1784770597u); // Results in [0,1).
}

float
BRAY_Halton::halton1217(uint index)
{
    return (thePerm1217[index % 1217u] * 1481089u +
                thePerm1217[(index / 1217u) % 1217u] * 1217u +
            thePerm1217[(index / 1481089u) % 1217u])
            * float(0x1.fffffcp-1 / 1802485313u); // Results in [0,1).
}

float
BRAY_Halton::halton1223(uint index)
{
    return (thePerm1223[index % 1223u] * 1495729u +
                thePerm1223[(index / 1223u) % 1223u] * 1223u +
            thePerm1223[(index / 1495729u) % 1223u])
            * float(0x1.fffffcp-1 / 1829276567u); // Results in [0,1).
}

float
BRAY_Halton::halton1229(uint index)
{
    return (thePerm1229[index % 1229u] * 1510441u +
                thePerm1229[(index / 1229u) % 1229u] * 1229u +
            thePerm1229[(index / 1510441u) % 1229u])
            * float(0x1.fffffcp-1 / 1856331989u); // Results in [0,1).
}

float
BRAY_Halton::halton1231(uint index)
{
    return (thePerm1231[index % 1231u] * 1515361u +
                thePerm1231[(index / 1231u) % 1231u] * 1231u +
            thePerm1231[(index / 1515361u) % 1231u])
            * float(0x1.fffffcp-1 / 1865409391u); // Results in [0,1).
}

float
BRAY_Halton::halton1237(uint index)
{
    return (thePerm1237[index % 1237u] * 1530169u +
                thePerm1237[(index / 1237u) % 1237u] * 1237u +
            thePerm1237[(index / 1530169u) % 1237u])
            * float(0x1.fffffcp-1 / 1892819053u); // Results in [0,1).
}

float
BRAY_Halton::halton1249(uint index)
{
    return (thePerm1249[index % 1249u] * 1560001u +
                thePerm1249[(index / 1249u) % 1249u] * 1249u +
            thePerm1249[(index / 1560001u) % 1249u])
            * float(0x1.fffffcp-1 / 1948441249u); // Results in [0,1).
}

float
BRAY_Halton::halton1259(uint index)
{
    return (thePerm1259[index % 1259u] * 1585081u +
                thePerm1259[(index / 1259u) % 1259u] * 1259u +
            thePerm1259[(index / 1585081u) % 1259u])
            * float(0x1.fffffcp-1 / 1995616979u); // Results in [0,1).
}

float
BRAY_Halton::halton1277(uint index)
{
    return (thePerm1277[index % 1277u] * 1630729u +
                thePerm1277[(index / 1277u) % 1277u] * 1277u +
            thePerm1277[(index / 1630729u) % 1277u])
            * float(0x1.fffffcp-1 / 2082440933u); // Results in [0,1).
}

float
BRAY_Halton::halton1279(uint index)
{
    return (thePerm1279[index % 1279u] * 1635841u +
                thePerm1279[(index / 1279u) % 1279u] * 1279u +
            thePerm1279[(index / 1635841u) % 1279u])
            * float(0x1.fffffcp-1 / 2092240639u); // Results in [0,1).
}

float
BRAY_Halton::halton1283(uint index)
{
    return (thePerm1283[index % 1283u] * 1646089u +
                thePerm1283[(index / 1283u) % 1283u] * 1283u +
            thePerm1283[(index / 1646089u) % 1283u])
            * float(0x1.fffffcp-1 / 2111932187u); // Results in [0,1).
}

float
BRAY_Halton::halton1289(uint index)
{
    return (thePerm1289[index % 1289u] * 1661521u +
                thePerm1289[(index / 1289u) % 1289u] * 1289u +
            thePerm1289[(index / 1661521u) % 1289u])
            * float(0x1.fffffcp-1 / 2141700569u); // Results in [0,1).
}

float
BRAY_Halton::halton1291(uint index)
{
    return (thePerm1291[index % 1291u] * 1666681u +
                thePerm1291[(index / 1291u) % 1291u] * 1291u +
            thePerm1291[(index / 1666681u) % 1291u])
            * float(0x1.fffffcp-1 / 2151685171u); // Results in [0,1).
}

float
BRAY_Halton::halton1297(uint index)
{
    return (thePerm1297[index % 1297u] * 1682209u +
                thePerm1297[(index / 1297u) % 1297u] * 1297u +
            thePerm1297[(index / 1682209u) % 1297u])
            * float(0x1.fffffcp-1 / 2181825073u); // Results in [0,1).
}

float
BRAY_Halton::halton1301(uint index)
{
    return (thePerm1301[index % 1301u] * 1692601u +
                thePerm1301[(index / 1301u) % 1301u] * 1301u +
            thePerm1301[(index / 1692601u) % 1301u])
            * float(0x1.fffffcp-1 / 2202073901u); // Results in [0,1).
}

float
BRAY_Halton::halton1303(uint index)
{
    return (thePerm1303[index % 1303u] * 1697809u +
                thePerm1303[(index / 1303u) % 1303u] * 1303u +
            thePerm1303[(index / 1697809u) % 1303u])
            * float(0x1.fffffcp-1 / 2212245127u); // Results in [0,1).
}

float
BRAY_Halton::halton1307(uint index)
{
    return (thePerm1307[index % 1307u] * 1708249u +
                thePerm1307[(index / 1307u) % 1307u] * 1307u +
            thePerm1307[(index / 1708249u) % 1307u])
            * float(0x1.fffffcp-1 / 2232681443u); // Results in [0,1).
}

float
BRAY_Halton::halton1319(uint index)
{
    return (thePerm1319[index % 1319u] * 1739761u +
                thePerm1319[(index / 1319u) % 1319u] * 1319u +
            thePerm1319[(index / 1739761u) % 1319u])
            * float(0x1.fffffcp-1 / 2294744759u); // Results in [0,1).
}

float
BRAY_Halton::halton1321(uint index)
{
    return (thePerm1321[index % 1321u] * 1745041u +
                thePerm1321[(index / 1321u) % 1321u] * 1321u +
            thePerm1321[(index / 1745041u) % 1321u])
            * float(0x1.fffffcp-1 / 2305199161u); // Results in [0,1).
}

float
BRAY_Halton::halton1327(uint index)
{
    return (thePerm1327[index % 1327u] * 1760929u +
                thePerm1327[(index / 1327u) % 1327u] * 1327u +
            thePerm1327[(index / 1760929u) % 1327u])
            * float(0x1.fffffcp-1 / 2336752783u); // Results in [0,1).
}

float
BRAY_Halton::halton1361(uint index)
{
    return (thePerm1361[index % 1361u] * 1852321u +
                thePerm1361[(index / 1361u) % 1361u] * 1361u +
            thePerm1361[(index / 1852321u) % 1361u])
            * float(0x1.fffffcp-1 / 2521008881u); // Results in [0,1).
}

float
BRAY_Halton::halton1367(uint index)
{
    return (thePerm1367[index % 1367u] * 1868689u +
                thePerm1367[(index / 1367u) % 1367u] * 1367u +
            thePerm1367[(index / 1868689u) % 1367u])
            * float(0x1.fffffcp-1 / 2554497863u); // Results in [0,1).
}

float
BRAY_Halton::halton1373(uint index)
{
    return (thePerm1373[index % 1373u] * 1885129u +
                thePerm1373[(index / 1373u) % 1373u] * 1373u +
            thePerm1373[(index / 1885129u) % 1373u])
            * float(0x1.fffffcp-1 / 2588282117u); // Results in [0,1).
}

float
BRAY_Halton::halton1381(uint index)
{
    return (thePerm1381[index % 1381u] * 1907161u +
                thePerm1381[(index / 1381u) % 1381u] * 1381u +
            thePerm1381[(index / 1907161u) % 1381u])
            * float(0x1.fffffcp-1 / 2633789341u); // Results in [0,1).
}

float
BRAY_Halton::halton1399(uint index)
{
    return (thePerm1399[index % 1399u] * 1957201u +
                thePerm1399[(index / 1399u) % 1399u] * 1399u +
            thePerm1399[(index / 1957201u) % 1399u])
            * float(0x1.fffffcp-1 / 2738124199u); // Results in [0,1).
}

float
BRAY_Halton::halton1409(uint index)
{
    return (thePerm1409[index % 1409u] * 1985281u +
                thePerm1409[(index / 1409u) % 1409u] * 1409u +
            thePerm1409[(index / 1985281u) % 1409u])
            * float(0x1.fffffcp-1 / 2797260929u); // Results in [0,1).
}

float
BRAY_Halton::halton1423(uint index)
{
    return (thePerm1423[index % 1423u] * 2024929u +
                thePerm1423[(index / 1423u) % 1423u] * 1423u +
            thePerm1423[(index / 2024929u) % 1423u])
            * float(0x1.fffffcp-1 / 2881473967u); // Results in [0,1).
}

float
BRAY_Halton::halton1427(uint index)
{
    return (thePerm1427[index % 1427u] * 2036329u +
                thePerm1427[(index / 1427u) % 1427u] * 1427u +
            thePerm1427[(index / 2036329u) % 1427u])
            * float(0x1.fffffcp-1 / 2905841483u); // Results in [0,1).
}

float
BRAY_Halton::halton1429(uint index)
{
    return (thePerm1429[index % 1429u] * 2042041u +
                thePerm1429[(index / 1429u) % 1429u] * 1429u +
            thePerm1429[(index / 2042041u) % 1429u])
            * float(0x1.fffffcp-1 / 2918076589u); // Results in [0,1).
}

float
BRAY_Halton::halton1433(uint index)
{
    return (thePerm1433[index % 1433u] * 2053489u +
                thePerm1433[(index / 1433u) % 1433u] * 1433u +
            thePerm1433[(index / 2053489u) % 1433u])
            * float(0x1.fffffcp-1 / 2942649737u); // Results in [0,1).
}

float
BRAY_Halton::halton1439(uint index)
{
    return (thePerm1439[index % 1439u] * 2070721u +
                thePerm1439[(index / 1439u) % 1439u] * 1439u +
            thePerm1439[(index / 2070721u) % 1439u])
            * float(0x1.fffffcp-1 / 2979767519u); // Results in [0,1).
}

float
BRAY_Halton::halton1447(uint index)
{
    return (thePerm1447[index % 1447u] * 2093809u +
                thePerm1447[(index / 1447u) % 1447u] * 1447u +
            thePerm1447[(index / 2093809u) % 1447u])
            * float(0x1.fffffcp-1 / 3029741623u); // Results in [0,1).
}

float
BRAY_Halton::halton1451(uint index)
{
    return (thePerm1451[index % 1451u] * 2105401u +
                thePerm1451[(index / 1451u) % 1451u] * 1451u +
            thePerm1451[(index / 2105401u) % 1451u])
            * float(0x1.fffffcp-1 / 3054936851u); // Results in [0,1).
}

float
BRAY_Halton::halton1453(uint index)
{
    return (thePerm1453[index % 1453u] * 2111209u +
                thePerm1453[(index / 1453u) % 1453u] * 1453u +
            thePerm1453[(index / 2111209u) % 1453u])
            * float(0x1.fffffcp-1 / 3067586677u); // Results in [0,1).
}

float
BRAY_Halton::halton1459(uint index)
{
    return (thePerm1459[index % 1459u] * 2128681u +
                thePerm1459[(index / 1459u) % 1459u] * 1459u +
            thePerm1459[(index / 2128681u) % 1459u])
            * float(0x1.fffffcp-1 / 3105745579u); // Results in [0,1).
}

float
BRAY_Halton::halton1471(uint index)
{
    return (thePerm1471[index % 1471u] * 2163841u +
                thePerm1471[(index / 1471u) % 1471u] * 1471u +
            thePerm1471[(index / 2163841u) % 1471u])
            * float(0x1.fffffcp-1 / 3183010111u); // Results in [0,1).
}

float
BRAY_Halton::halton1481(uint index)
{
    return (thePerm1481[index % 1481u] * 2193361u +
                thePerm1481[(index / 1481u) % 1481u] * 1481u +
            thePerm1481[(index / 2193361u) % 1481u])
            * float(0x1.fffffcp-1 / 3248367641u); // Results in [0,1).
}

float
BRAY_Halton::halton1483(uint index)
{
    return (thePerm1483[index % 1483u] * 2199289u +
                thePerm1483[(index / 1483u) % 1483u] * 1483u +
            thePerm1483[(index / 2199289u) % 1483u])
            * float(0x1.fffffcp-1 / 3261545587u); // Results in [0,1).
}

float
BRAY_Halton::halton1487(uint index)
{
    return (thePerm1487[index % 1487u] * 2211169u +
                thePerm1487[(index / 1487u) % 1487u] * 1487u +
            thePerm1487[(index / 2211169u) % 1487u])
            * float(0x1.fffffcp-1 / 3288008303u); // Results in [0,1).
}

float
BRAY_Halton::halton1489(uint index)
{
    return (thePerm1489[index % 1489u] * 2217121u +
                thePerm1489[(index / 1489u) % 1489u] * 1489u +
            thePerm1489[(index / 2217121u) % 1489u])
            * float(0x1.fffffcp-1 / 3301293169u); // Results in [0,1).
}

float
BRAY_Halton::halton1493(uint index)
{
    return (thePerm1493[index % 1493u] * 2229049u +
                thePerm1493[(index / 1493u) % 1493u] * 1493u +
            thePerm1493[(index / 2229049u) % 1493u])
            * float(0x1.fffffcp-1 / 3327970157u); // Results in [0,1).
}

float
BRAY_Halton::halton1499(uint index)
{
    return (thePerm1499[index % 1499u] * 2247001u +
                thePerm1499[(index / 1499u) % 1499u] * 1499u +
            thePerm1499[(index / 2247001u) % 1499u])
            * float(0x1.fffffcp-1 / 3368254499u); // Results in [0,1).
}

float
BRAY_Halton::halton1511(uint index)
{
    return (thePerm1511[index % 1511u] * 2283121u +
                thePerm1511[(index / 1511u) % 1511u] * 1511u +
            thePerm1511[(index / 2283121u) % 1511u])
            * float(0x1.fffffcp-1 / 3449795831u); // Results in [0,1).
}

float
BRAY_Halton::halton1523(uint index)
{
    return (thePerm1523[index % 1523u] * 2319529u +
                thePerm1523[(index / 1523u) % 1523u] * 1523u +
            thePerm1523[(index / 2319529u) % 1523u])
            * float(0x1.fffffcp-1 / 3532642667u); // Results in [0,1).
}

float
BRAY_Halton::halton1531(uint index)
{
    return (thePerm1531[index % 1531u] * 2343961u +
                thePerm1531[(index / 1531u) % 1531u] * 1531u +
            thePerm1531[(index / 2343961u) % 1531u])
            * float(0x1.fffffcp-1 / 3588604291u); // Results in [0,1).
}

float
BRAY_Halton::halton1543(uint index)
{
    return (thePerm1543[index % 1543u] * 2380849u +
                thePerm1543[(index / 1543u) % 1543u] * 1543u +
            thePerm1543[(index / 2380849u) % 1543u])
            * float(0x1.fffffcp-1 / 3673650007u); // Results in [0,1).
}

float
BRAY_Halton::halton1549(uint index)
{
    return (thePerm1549[index % 1549u] * 2399401u +
                thePerm1549[(index / 1549u) % 1549u] * 1549u +
            thePerm1549[(index / 2399401u) % 1549u])
            * float(0x1.fffffcp-1 / 3716672149u); // Results in [0,1).
}

float
BRAY_Halton::halton1553(uint index)
{
    return (thePerm1553[index % 1553u] * 2411809u +
                thePerm1553[(index / 1553u) % 1553u] * 1553u +
            thePerm1553[(index / 2411809u) % 1553u])
            * float(0x1.fffffcp-1 / 3745539377u); // Results in [0,1).
}

float
BRAY_Halton::halton1559(uint index)
{
    return (thePerm1559[index % 1559u] * 2430481u +
                thePerm1559[(index / 1559u) % 1559u] * 1559u +
            thePerm1559[(index / 2430481u) % 1559u])
            * float(0x1.fffffcp-1 / 3789119879u); // Results in [0,1).
}

float
BRAY_Halton::halton1567(uint index)
{
    return (thePerm1567[index % 1567u] * 2455489u +
                thePerm1567[(index / 1567u) % 1567u] * 1567u +
            thePerm1567[(index / 2455489u) % 1567u])
            * float(0x1.fffffcp-1 / 3847751263u); // Results in [0,1).
}

float
BRAY_Halton::halton1571(uint index)
{
    return (thePerm1571[index % 1571u] * 2468041u +
                thePerm1571[(index / 1571u) % 1571u] * 1571u +
            thePerm1571[(index / 2468041u) % 1571u])
            * float(0x1.fffffcp-1 / 3877292411u); // Results in [0,1).
}

float
BRAY_Halton::halton1579(uint index)
{
    return (thePerm1579[index % 1579u] * 2493241u +
                thePerm1579[(index / 1579u) % 1579u] * 1579u +
            thePerm1579[(index / 2493241u) % 1579u])
            * float(0x1.fffffcp-1 / 3936827539u); // Results in [0,1).
}

float
BRAY_Halton::halton1583(uint index)
{
    return (thePerm1583[index % 1583u] * 2505889u +
                thePerm1583[(index / 1583u) % 1583u] * 1583u +
            thePerm1583[(index / 2505889u) % 1583u])
            * float(0x1.fffffcp-1 / 3966822287u); // Results in [0,1).
}

float
BRAY_Halton::halton1597(uint index)
{
    return (thePerm1597[index % 1597u] * 2550409u +
                thePerm1597[(index / 1597u) % 1597u] * 1597u +
            thePerm1597[(index / 2550409u) % 1597u])
            * float(0x1.fffffcp-1 / 4073003173u); // Results in [0,1).
}

float
BRAY_Halton::halton1601(uint index)
{
    return (thePerm1601[index % 1601u] * 2563201u +
                thePerm1601[(index / 1601u) % 1601u] * 1601u +
            thePerm1601[(index / 2563201u) % 1601u])
            * float(0x1.fffffcp-1 / 4103684801u); // Results in [0,1).
}

float
BRAY_Halton::halton1607(uint index)
{
    return (thePerm1607[index % 1607u] * 2582449u +
                thePerm1607[(index / 1607u) % 1607u] * 1607u +
            thePerm1607[(index / 2582449u) % 1607u])
            * float(0x1.fffffcp-1 / 4149995543u); // Results in [0,1).
}

float
BRAY_Halton::halton1609(uint index)
{
    return (thePerm1609[index % 1609u] * 2588881u +
                thePerm1609[(index / 1609u) % 1609u] * 1609u +
            thePerm1609[(index / 2588881u) % 1609u])
            * float(0x1.fffffcp-1 / 4165509529u); // Results in [0,1).
}

float
BRAY_Halton::halton1613(uint index)
{
    return (thePerm1613[index % 1613u] * 2601769u +
                thePerm1613[(index / 1613u) % 1613u] * 1613u +
            thePerm1613[(index / 2601769u) % 1613u])
            * float(0x1.fffffcp-1 / 4196653397u); // Results in [0,1).
}

float
BRAY_Halton::halton1619(uint index)
{
    return (thePerm1619[index % 1619u] * 2621161u +
                thePerm1619[(index / 1619u) % 1619u] * 1619u +
            thePerm1619[(index / 2621161u) % 1619u])
            * float(0x1.fffffcp-1 / 4243659659u); // Results in [0,1).
}

