#pragma once
#include <string>
#include <vector>
class Element {
private:
    std::string name;
    std::string latinName;
    std::string symbol;
    int number;
    double mass;
public:
    Element(int number, std::string name, std::string symbol, std::string latinName, double mass) {
        this->name = name;
        this->latinName = latinName;
        this->symbol = symbol;
        this->number = number;
        this->mass = mass;
    }
    Element(int number) {
        this->number = number;
    }
    void PrintElem() {
        std::cout << "Номер элемента: " << number << std::endl;
        std::cout << "Имя элемента: " << name << std::endl;
        std::cout << "Имя элемента на латыни: " << latinName << std::endl;
        std::cout << "Символ элемента: " << symbol << std::endl;
        std::cout << "Mасса элемента: " << mass << std::endl;
        std::cout << "=======================" << std::endl;
    }
    std::string GetSymbol() {
        return symbol;
    }
    std::string GetName() {
        return name;
    }
    std::string GetLatin() {
        return latinName;
    }
    double GetMass() {
        return mass;
    }
};
// Создаем объекты элементов
    Element H (1, "Водород", "H", "Hydrogenium", 1.00784);
    Element He(2, "Гелий", "He", "Helium", 4.002602);
    Element Li(3, "Литий", "Li", "Lithium", 6.941);
    Element Be(4, "Бериллий", "Be", "Beryllium", 9.0122);
    Element B (5, "Бор", "B",  "Borum", 10.811);
    Element C (6, "Углерод", "C",  "Carboneum", 12.011);
    Element N (7, "Азот", "N",  "Nitrogenium", 14.007);
    Element O (8, "Кислород", "O",  "Oxygenium", 15.999);
    Element F (9, "Фтор", "F",  "Fluorum", 18.998);
    Element Ne(10, "Неон", "Ne", "Neon", 20.179);
    Element Na(11, "Натрий", "Na", "Natrium", 22.99);
    Element Mg(12, "Магний", "Mg", "Magnesium", 24.305);
    Element Al(13, "Алюминий", "Al", "Aluminium", 26.9815);
    Element Si(14, "Кремний", "Si", "Silicium", 28.086);
    Element P (15, "Фосфор", "P",  "Phosphorus", 30.974);
    Element S (16, "Сера", "S",  "Sulfur", 32.066);
    Element Cl(17, "Хлор", "Cl", "Chlorum", 35.453);
    Element Ar(18, "Аргон", "Ar", "Argon", 39.948);
    Element K (19, "Калий", "K",  "Kalium", 39.098);
    Element Ca(20, "Кальций", "Ca", "Calcium", 40.08);
    Element Sc(21, "Скандий", "Sc", "Scandium", 44.956);
    Element Ti(22, "Титан", "Ti", "Titanium", 47.9);
    Element V (23, "Ванадий", "V",  "Vanadium", 50.941);
    Element Cr(24, "Хром", "Cr", "Chromium", 51.996);
    Element Mn(25, "Марганец", "Mn", "Manganum", 54.938);
    Element Fe(26, "Железо", "Fe", "Ferrum", 55.847);
    Element Co(27, "Кобальт", "Co", "Cobaltum", 58.933);
    Element Ni(28, "Никель", "Ni", "Niccolum", 58.7);
    Element Cu(29, "Медь", "Cu", "Cuprum", 63.546);
    Element Zn(30, "Цинк", "Zn", "Zincum", 65.39);
    Element Ga(31, "Галлий", "Ga", "Gallium", 69.72);
    Element Ge(32, "Германий", "Ge", "Germanium", 72.59);
    Element As(33, "Мышьяк", "As", "Arsenicum", 74.992);
    Element Se(34, "Селен", "Se", "Selenium", 78.96);
    Element Br(35, "Бром", "Br", "Bromum", 79.904);
    Element Kr(36, "Криптон", "Kr", "Krypton", 83.8);
    Element Rb(37, "Рубидий", "Rb", "Rubidium", 85.468);
    Element Sr(38, "Стронций", "Sr", "Strontium", 87.62);
    Element Y(39, "Иттрий", "Y",  "Yttrium", 88.906);
    Element Zr(40, "Цирконий", "Zr", "Zirconium", 91.22);
    Element Nb(41, "Ниобий", "Nb", "Niobium", 92.906);
    Element Mo(42, "Молибден", "Mo", "Molybdenum", 95.94);
    Element Tc(43, "Технеций", "Tc", "Technetium", 97.91);
    Element Ru(44, "Рутений", "Ru", "Ruthenium", 101.07);
    Element Rh(45, "Родий", "Rh", "Rhodium", 102.906);
    Element Pd(46, "Палладий", "Pd", "Palladium", 106.4);
    Element Ag(47, "Серебро", "Ag", "Argentum", 107.868);
    Element Cd(48, "Кадмий", "Cd", "Cadmium", 112.41);
    Element In(49, "Индий", "In", "Indium", 114.82);
    Element Sn(50, "Олово", "Sn", "Stannum", 118.71);
    Element Sb(51, "Сурьма", "Sb", "Stibium", 121.75);
    Element Te(52, "Теллур", "Te", "Tellurium", 127.6);
    Element I (53, "Иод", "I ", "Iodum", 126.9045);
    Element Xe(54, "Ксенон", "Xe", "Xenon", 131.29);
    Element Cs(55, "Цезий", "Cs", "Caesium", 132.905);
    Element Ba(56, "Барий", "Ba", "Barium", 137.33);
    Element La(57, "Лантан", "La", "Lanthanum", 138.9055);
    Element Ce(58, "Церий", "Ce", "Cerium", 140.12);
    Element Pr(59, "Празеодим", "Pr", "Praseodymium", 140.908);
    Element Nd(60, "Неодим", "Nd", "Neodymium", 144.24);
    Element Pm(61, "Прометий", "Pm", "Promethium", 144.91);
    Element Sm(62, "Самарий", "Sm", "Samarium", 150.36);
    Element Eu(63, "Европий", "Eu", "Europium", 151.96);
    Element Gd(64, "Гадолиний", "Gd", "Gadolinium", 157.25);
    Element Tb(65, "Тербий", "Tb", "Terbium", 158.926);
    Element Dy(66, "Диспрозий", "Dy", "Dysprosium", 162.5);
    Element Ho(67, "Гольмий", "Ho", "Holmium", 164.93);
    Element Er(68, "Эрбий", "Er", "Erbium", 167.26);
    Element Tm(69, "Тулий", "Tm", "Thulium", 168.934);
    Element Yb(70, "Иттербий", "Yb", "Ytterbium", 173.04);
    Element Lu(71, "Лютеций", "Lu", "Lutetium", 174.967);
    Element Hf(72, "Гафний", "Hf", "Hafnium", 178.49);
    Element Ta(73, "Тантал", "Ta", "Tantalum", 180.9479);
    Element W (74, "Вольфрам", "W ", "Wolframium", 183.85);
    Element Re(75, "Рений", "Re", "Rhenium", 186.207);
    Element Os(76, "Осмий", "Os", "Osmium", 190.2);
    Element Ir(77, "Иридий", "Ir", "Iridium", 192.22);
    Element Pt(78, "Платина", "Pt", "Platinum", 195.08);
    Element Au(79, "Золото", "Au", "Aurum", 196.967);
    Element Hg(80, "Ртуть", "Hg", "Hydrargyrum", 200.59);
    Element Tl(81, "Таллий", "Tl", "Thallium", 204.38);
    Element Pb(82, "Свинец", "Pb", "Plumbum", 207.19);
    Element Bi(83, "Висмут", "Bi", "Bismuthum", 208.98);
    Element Po(84, "Полоний", "Po", "Polonium", 209.98);
    Element At(85, "Астат", "At", "Astatium", 209.99);
    Element Rn(86, "Радон", "Rn", "Radon", 222);
    Element Fr(87, "Франций", "Fr", "Francium", 223);
    Element Ra(88, "Радий", "Ra", "Radium", 226);
    Element Ac(89, "Актиний", "Ac", "Actinium", 227);
    Element Th(90, "Торий", "Th", "Thorium", 232.038);
    Element Pa(91, "Протактиний", "Pa", "Protactinium", 231.04);
    Element U (92, "Уран", "U", "Uranium", 238.03);
    Element Np(93, "Нептуний", "Np", "Neptunium", 237.05);
    Element Pu(94, "Плутоний", "Pu", "Plutonium", 244.06);
    Element Am(95, "Америций", "Am", "Americium", 243.06);
    Element Cm(96, "Кюрий", "Cm", "Curium", 247.07);
    Element Bk(97, "Берклий", "Bk", "Berkelium", 247.07);
    Element Cf(98, "Калифорний", "Cf", "Californium", 251.08);
    Element Es(99, "Эйнштейний", "Es", "Einsteinium", 252.08);
    Element Fm(100, "Фермий", "Fm", "Fermium", 257.1);
    Element Md(101, "Менделевий", "Md", "Mendelevium", 258.1);
    Element No(102, "Нобелий", "No", "Nobelium", 259.1);
    Element Lr(103, "Лоуренсий", "Lr", "Lawrencium", 260.1);
    Element Rf(104, "Резерфордий", "Rf", "Rutherfordium", 261);
    Element Db(105, "Дубний", "Db", "Dubnium", 262);
    Element Sg(106, "Сиборгий", "Sg", "Seaborgium", 263);
    Element Bh(107, "Борий", "Bh", "Bohrium", 262);
    Element Hs(108, "Хассий", "Hs", "Hassium", 265);
    Element Mt(109, "Мейтнерий", "Mt", "Meitnerium", 266);
    Element Ds(110, "Дармштадтий", "Ds", "Darmstadtium", 271);
    Element Rg(111, "Рентгений", "Rg", "Roentgenium", 272);
    Element Cn(112, "Коперниций", "Cn", "Copernicium", 285);
    Element Nh(113, "Нихоний", "Nh", "Nihonium", 286);
    Element Fl(114, "Флеровий", "Fl", "Flerovium", 0);
    Element Mc(115, "Московий", "Mc", "Moscovium", 0);
    Element Lv(116, "Ливерморий", "Lv", "Livermorium", 0);
    Element Ts(117, "Теннессин", "Ts", "Tennessium", 0);
    Element Og(118, "Оганесон", "Og", "Oganeson", 294);
    std::vector<Element> table = {
        H, He, Li, Be, B, C, N, O, F, Ne, Na, Mg, Al, Si, P, S, Cl, Ar, K,
        Ca, Sc, Ti, V, Cr, Mn, Fe, Co, Ni, Cu, Zn, Ga, Ge, As, Se, Br, Kr, Rb, Sr,
        Y, Zr, Nb, Mo, Tc, Ru, Rh, Pd, Ag, Cd, In, Sn, Sb, Te, I, Xe, Cs, Ba, La,
        Ce, Pr, Nd, Pm, Sm, Eu, Gd, Tb, Dy, Ho, Er, Tm, Yb, Lu, Hf, Ta, W, Re, Os,
        Ir, Pt, Au, Hg, Tl, Pb, Bi, Po, At, Rn, Fr, Ra, Ac, Th, Pa, U, Np, Pu, Am,
        Cm, Bk, Cf, Es, Fm, Md, No, Lr, Rf, Db, Sg, Bh, Hs, Mt, Ds, Rg, Cn, Nh, Fl,
        Mc, Lv, Ts, Og
    };