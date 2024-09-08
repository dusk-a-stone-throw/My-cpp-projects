#include "mainClass.h"
#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
Element H(1, "�������", "H", "Hydrogenium", 1.00784);
Element He(2, "�����", "He", "Helium", 4.002602);
Element Li(3, "�����", "Li", "Lithium", 6.941);
Element Be(4, "��������", "Be", "Beryllium", 9.0122);
Element B(5, "���", "B", "Borum", 10.811);
Element C(6, "�������", "C", "Carboneum", 12.011);
Element N(7, "����", "N", "Nitrogenium", 14.007);
Element O(8, "��������", "O", "Oxygenium", 15.999);
Element F(9, "����", "F", "Fluorum", 18.998);
Element Ne(10, "����", "Ne", "Neon", 20.179);
Element Na(11, "������", "Na", "Natrium", 22.99);
Element Mg(12, "������", "Mg", "Magnesium", 24.305);
Element Al(13, "��������", "Al", "Aluminium", 26.9815);
Element Si(14, "�������", "Si", "Silicium", 28.086);
Element P(15, "������", "P", "Phosphorus", 30.974);
Element S(16, "����", "S", "Sulfur", 32.066);
Element Cl(17, "����", "Cl", "Chlorum", 35.453);
Element Ar(18, "�����", "Ar", "Argon", 39.948);
Element K(19, "�����", "K", "Kalium", 39.098);
Element Ca(20, "�������", "Ca", "Calcium", 40.08);
Element Sc(21, "�������", "Sc", "Scandium", 44.956);
Element Ti(22, "�����", "Ti", "Titanium", 47.9);
Element V(23, "�������", "V", "Vanadium", 50.941);
Element Cr(24, "����", "Cr", "Chromium", 51.996);
Element Mn(25, "��������", "Mn", "Manganum", 54.938);
Element Fe(26, "������", "Fe", "Ferrum", 55.847);
Element Co(27, "�������", "Co", "Cobaltum", 58.933);
Element Ni(28, "������", "Ni", "Niccolum", 58.7);
Element Cu(29, "����", "Cu", "Cuprum", 63.546);
Element Zn(30, "����", "Zn", "Zincum", 65.39);
Element Ga(31, "������", "Ga", "Gallium", 69.72);
Element Ge(32, "��������", "Ge", "Germanium", 72.59);
Element As(33, "������", "As", "Arsenicum", 74.992);
Element Se(34, "�����", "Se", "Selenium", 78.96);
Element Br(35, "����", "Br", "Bromum", 79.904);
Element Kr(36, "�������", "Kr", "Krypton", 83.8);
Element Rb(37, "�������", "Rb", "Rubidium", 85.468);
Element Sr(38, "��������", "Sr", "Strontium", 87.62);
Element Y(39, "������", "Y", "Yttrium", 88.906);
Element Zr(40, "��������", "Zr", "Zirconium", 91.22);
Element Nb(41, "������", "Nb", "Niobium", 92.906);
Element Mo(42, "��������", "Mo", "Molybdenum", 95.94);
Element Tc(43, "��������", "Tc", "Technetium", 97.91);
Element Ru(44, "�������", "Ru", "Ruthenium", 101.07);
Element Rh(45, "�����", "Rh", "Rhodium", 102.906);
Element Pd(46, "��������", "Pd", "Palladium", 106.4);
Element Ag(47, "�������", "Ag", "Argentum", 107.868);
Element Cd(48, "������", "Cd", "Cadmium", 112.41);
Element In(49, "�����", "In", "Indium", 114.82);
Element Sn(50, "�����", "Sn", "Stannum", 118.71);
Element Sb(51, "������", "Sb", "Stibium", 121.75);
Element Te(52, "������", "Te", "Tellurium", 127.6);
Element I(53, "���", "I ", "Iodum", 126.9045);
Element Xe(54, "������", "Xe", "Xenon", 131.29);
Element Cs(55, "�����", "Cs", "Caesium", 132.905);
Element Ba(56, "�����", "Ba", "Barium", 137.33);
Element La(57, "������", "La", "Lanthanum", 138.9055);
Element Ce(58, "�����", "Ce", "Cerium", 140.12);
Element Pr(59, "���������", "Pr", "Praseodymium", 140.908);
Element Nd(60, "������", "Nd", "Neodymium", 144.24);
Element Pm(61, "��������", "Pm", "Promethium", 144.91);
Element Sm(62, "�������", "Sm", "Samarium", 150.36);
Element Eu(63, "�������", "Eu", "Europium", 151.96);
Element Gd(64, "���������", "Gd", "Gadolinium", 157.25);
Element Tb(65, "������", "Tb", "Terbium", 158.926);
Element Dy(66, "���������", "Dy", "Dysprosium", 162.5);
Element Ho(67, "�������", "Ho", "Holmium", 164.93);
Element Er(68, "�����", "Er", "Erbium", 167.26);
Element Tm(69, "�����", "Tm", "Thulium", 168.934);
Element Yb(70, "��������", "Yb", "Ytterbium", 173.04);
Element Lu(71, "�������", "Lu", "Lutetium", 174.967);
Element Hf(72, "������", "Hf", "Hafnium", 178.49);
Element Ta(73, "������", "Ta", "Tantalum", 180.9479);
Element W(74, "��������", "W ", "Wolframium", 183.85);
Element Re(75, "�����", "Re", "Rhenium", 186.207);
Element Os(76, "�����", "Os", "Osmium", 190.2);
Element Ir(77, "������", "Ir", "Iridium", 192.22);
Element Pt(78, "�������", "Pt", "Platinum", 195.08);
Element Au(79, "������", "Au", "Aurum", 196.967);
Element Hg(80, "�����", "Hg", "Hydrargyrum", 200.59);
Element Tl(81, "������", "Tl", "Thallium", 204.38);
Element Pb(82, "������", "Pb", "Plumbum", 207.19);
Element Bi(83, "������", "Bi", "Bismuthum", 208.98);
Element Po(84, "�������", "Po", "Polonium", 209.98);
Element At(85, "�����", "At", "Astatium", 209.99);
Element Rn(86, "�����", "Rn", "Radon", 222);
Element Fr(87, "�������", "Fr", "Francium", 223);
Element Ra(88, "�����", "Ra", "Radium", 226);
Element Ac(89, "�������", "Ac", "Actinium", 227);
Element Th(90, "�����", "Th", "Thorium", 232.038);
Element Pa(91, "�����������", "Pa", "Protactinium", 231.04);
Element U(92, "����", "U", "Uranium", 238.03);
Element Np(93, "��������", "Np", "Neptunium", 237.05);
Element Pu(94, "��������", "Pu", "Plutonium", 244.06);
Element Am(95, "��������", "Am", "Americium", 243.06);
Element Cm(96, "�����", "Cm", "Curium", 247.07);
Element Bk(97, "�������", "Bk", "Berkelium", 247.07);
Element Cf(98, "����������", "Cf", "Californium", 251.08);
Element Es(99, "����������", "Es", "Einsteinium", 252.08);
Element Fm(100, "������", "Fm", "Fermium", 257.1);
Element Md(101, "����������", "Md", "Mendelevium", 258.1);
Element No(102, "�������", "No", "Nobelium", 259.1);
Element Lr(103, "���������", "Lr", "Lawrencium", 260.1);
Element Rf(104, "�����������", "Rf", "Rutherfordium", 261);
Element Db(105, "������", "Db", "Dubnium", 262);
Element Sg(106, "��������", "Sg", "Seaborgium", 263);
Element Bh(107, "�����", "Bh", "Bohrium", 262);
Element Hs(108, "������", "Hs", "Hassium", 265);
Element Mt(109, "���������", "Mt", "Meitnerium", 266);
Element Ds(110, "�����������", "Ds", "Darmstadtium", 271);
Element Rg(111, "���������", "Rg", "Roentgenium", 272);
Element Cn(112, "����������", "Cn", "Copernicium", 285);
Element Nh(113, "�������", "Nh", "Nihonium", 286);
Element Fl(114, "��������", "Fl", "Flerovium", 0);
Element Mc(115, "��������", "Mc", "Moscovium", 0);
Element Lv(116, "����������", "Lv", "Livermorium", 0);
Element Ts(117, "���������", "Ts", "Tennessium", 0);
Element Og(118, "��������", "Og", "Oganeson", 294);
std::vector<Element> table = {H,  He, Li, Be, B,  C,  N,  O,  F,  Ne, Na, Mg, Al, Si, P,  S,  Cl,
                              Ar, K,  Ca, Sc, Ti, V,  Cr, Mn, Fe, Co, Ni, Cu, Zn, Ga, Ge, As, Se,
                              Br, Kr, Rb, Sr, Y,  Zr, Nb, Mo, Tc, Ru, Rh, Pd, Ag, Cd, In, Sn, Sb,
                              Te, I,  Xe, Cs, Ba, La, Ce, Pr, Nd, Pm, Sm, Eu, Gd, Tb, Dy, Ho, Er,
                              Tm, Yb, Lu, Hf, Ta, W,  Re, Os, Ir, Pt, Au, Hg, Tl, Pb, Bi, Po, At,
                              Rn, Fr, Ra, Ac, Th, Pa, U,  Np, Pu, Am, Cm, Bk, Cf, Es, Fm, Md, No,
                              Lr, Rf, Db, Sg, Bh, Hs, Mt, Ds, Rg, Cn, Nh, Fl, Mc, Lv, Ts, Og};
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "����� ����������!" << endl;
    while(true) {
        int menu;
        cout << "�������� ����� ����: 1 - ����� �� �������," << endl;
        cout << "2 - ����� �� ������, 3 - ����� �� �������� �� ������," << endl;
        cout << "4 - ����� �� �����, 5 - ����� �� �������� �� �������," << endl;
        cout << "6 - ������� ��� ��������. (������� 12345, ����� �����): " << endl;
        cin >> menu;
        switch(menu) {
            case 1: { // ����� �� �������
                string a;
                cin >> a;
                bool search = true;
                for(int i = 0; i < table.size(); i++) {
                    if((table[i - 1].GetSymbol() == a) && (search == true)) {
                        table[i - 1].PrintElem();
                        search = false;
                    }
                }
                if(search == true) {
                    cout << "������� �� ������." << endl;
                }
                break;
            }
            case 2: { // �� ������
                int a;
                cin >> a;
                if(a <= 0 || a > 118) {
                    cout << "������� �� ������." << endl;
                }
                else {
                    table[a - 1].PrintElem();
                }
                break;
            }
            case 3: { // �� �������� �� ������
                string c;
                cin >> c;
                bool search2 = true;
                for(int i = 0; i < table.size(); i++) {
                    if((table[i].GetLatin() == c) && (search2 == true)) {
                        table[i].PrintElem();
                        search2 = false;
                    }
                }
                if(search2 == true) {
                    cout << "������� �� ������." << endl;
                }
                break;
            }
            case 4: { // �� �����
                double c;
                cin >> c;
                bool search5 = true;
                cout << "������� ��������:" << endl;
                for(int i = 0; i < table.size(); i++) {
                    if(int(round(table[i].GetMass()) == int(c))) {
                        table[i].PrintElem();
                        search5 = false;
                    }
                }
                if(search5 == true) {
                    cout << "�������� �� �������." << endl;
                }
                break;
            }
            case 5: { // �� �������� ��������
                string b;
                cin >> b;
                bool search3 = true;
                for(int i = 0; i < table.size(); i++) {
                    if((table[i].GetName() == b) && (search3 == true)) {
                        table[i].PrintElem();
                        search3 = false;
                    }
                }
                if(search3 == true) {
                    cout << "������� �� ������." << endl;
                }
                break;
            }
            case 6: { // ��� ��������
                for(int i = 1; i < table.size(); i++) {
                    table[i].PrintElem();
                }
                break;
            }
            case 12345:
                cout << "�����." << endl;
                return 0;
            default:
                cout << "������� �� �������." << endl;
        }
    }
    return 0;
}
