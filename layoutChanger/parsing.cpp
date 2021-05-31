#pragma once
void parsing(char phrase[]) {
    int i = 0;
    while(phrase[i] != '\0') {
        switch(phrase[i]) {
            case 'z': {
                std::cout  << "я";
                break;
            }
            case 'x': {
                std::cout  << "ч";
                break;
            }
            case 'c': {
                std::cout  << "с";
                break;
            }
            case 'v': {
                std::cout  << "м";
                break;
            }
            case 'b': {
                std::cout  << "и";
                break;
            }
            case 'n': {
                std::cout  << "т";
                break;
            }
            case 'm': {
                std::cout  << "ь";
                break;
            }
            case ',': {
                std::cout  << "б";
                break;
            }
            case '.': {
                std::cout  << "ю";
                break;
            }
            case 'a': {
                std::cout  << "ф";
                break;
            }
            case 's': {
                std::cout  << "ы";
                break;
            }
            case 'd': {
                std::cout  << "в";
                break;
            }
            case 'f': {
                std::cout  << "а";
                break;
            }
            case 'g': {
                std::cout  << "п";
                break;
            }
            case 'h': {
                std::cout  << "р";
                break;
            }
            case 'j': {
                std::cout  << "о";
                break;
            }
            case 'k': {
                std::cout  << "л";
                break;
            }
            case 'l': {
                std::cout  << "д";
                break;
            }
            case ';': {
                std::cout  << "ж";
                break;
            }
            case '\'': {
                std::cout  << "э";
                break;
            }
            case 'q': {
                std::cout  << "й";
                break;
            }
            case 'w': {
                std::cout  << "ц";
                break;
            }
            case 'e': {
                std::cout  << "у";
                break;
            }
            case 'r': {
                std::cout  << "к";
                break;
            }
            case 't': {
                std::cout  << "е";
                break;
            }
            case 'y': {
                std::cout  << "н";
                break;
            }
            case 'u': {
                std::cout  << "г";
                break;
            }
            case 'i': {
                std::cout  << "ш";
                break;
            }
            case 'o': {
                std::cout  << "щ";
                break;
            }
            case 'p': {
                std::cout  << "з";
                break;
            }
            case '[': {
                std::cout  << "х";
                break;
            }
            case ']': {
                std::cout  << "ъ";
                break;
            }
            case '`': {
                std::cout  << "ё";
                break;
            }
            case '/': {
                std::cout  << ".";
                break;
            }
            case 'Z': {
                std::cout  << "Я";
                break;
            }
            case 'X': {
                std::cout  << "Ч";
                break;
            }
            case 'C': {
                std::cout  << "С";
                break;
            }
            case 'V': {
                std::cout  << "М";
                break;
            }
            case 'B': {
                std::cout  << "И";
                break;
            }
            case 'N': {
                std::cout  << "Т";
                break;
            }
            case 'M': {
                std::cout  << "Ь";
                break;
            }
           
            case 'A': {
                std::cout  << "Ф";
                break;
            }
            case 'S': {
                std::cout  << "Ы";
                break;
            }
            case 'D': {
                std::cout  << "В";
                break;
            }
            case 'F': {
                std::cout  << "А";
                break;
            }
            case 'G': {
                std::cout  << "П";
                break;
            }
            case 'H': {
                std::cout  << "Р";
                break;
            }
            case 'J': {
                std::cout  << "О";
                break;
            }
            case 'K': {
                std::cout  << "Л";
                break;
            }
            case 'L': {
                std::cout  << "Д";
                break;
            }
            case 'Q': {
                std::cout  << "Й";
                break;
            }
            case 'W': {
                std::cout  << "Ц";
                break;
            }
            case 'E': {
                std::cout  << "У";
                break;
            }
            case 'R': {
                std::cout  << "К";
                break;
            }
            case 'T': {
                std::cout  << "Е";
                break;
            }
            case 'Y': {
                std::cout  << "Н";
                break;
            }
            case 'U': {
                std::cout  << "Г";
                break;
            }
            case 'I': {
                std::cout  << "Ш";
                break;
            }
            case 'O': {
                std::cout  << "Щ";
                break;
            }
            case 'P': {
                std::cout  << "З";
                break;
            }
            default:
                std::cout << phrase[i];
        }

        i++;
    }
    std::cout << std::endl;
}
