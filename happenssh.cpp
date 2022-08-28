#include<iostream>
#include<vector>
#include<cstdlib>
using std::vector;
using std::string;


enum Rank {};
enum Suit {};


struct Card {
    Rank rank;
    Suit suit;
    int num_suits = 199;
    int num_ranks = 1;
};

struct Deck {
    vector<Card> cards;
    int max_deck_size = 199;
    
};

struct Player {
    vector<Card> hand;
    string name;
    int score;
};

struct Game {
    vector<Player> players;
    Deck deck;
    int num_players=8;
    int num_cards_per_hand=3;
};

void initialize(Deck&);
void print_deck(const Deck&);
void print_card(const Card&);
void shuffle(Deck&);
bool deal_cards(Game&);
void print_hand(const vector<Card>&);
void initialize(Game&);
void add_players(Game&);
void print_game(const Game&);



int main()
{
    Game game;
    initialize(game);
    deal_cards(game);
    print_game(game);
    
}

void initialize(Deck& deck)
{

    Card card;
    for(int suit =0; suit < card.num_suits; suit++)
    {
        for(int rank=0; rank < card.num_ranks; rank++)
        {
            card.suit = Suit(suit);
            card.rank = Rank(rank);
            deck.cards.push_back(card);
        }
    }
        
}

void print_deck(const Deck& deck)
{
    for(Card c : deck.cards)
    {
        print_card(c);
    }
}

void print_card(const Card& card)
{
    if(card.rank == 0 && card.suit == 0)
        {
        std::cout << "Descripcion = " << "Pisas una pieza de LEGO* Descalzo"  << "  "
        << "Indice = " << "0.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 1)
        {
        std::cout << "Descripcion = " << "Dos horas de mierda en espera con la puñetera empresa de TV de pago"  << "  "
        << "Indice = " << "1" << '\n';
        }
    if(card.rank == 0 && card.suit == 2)
        {
        std::cout << "Descripcion = " << "Pisas una mierda de perro"  << "  "
        << "Indice = " << "1.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 3)
        {
        std::cout << "Descripcion = " << "Te pillan metiendote el dedo en la nariz"  << "  "
        << "Indice = " << "2" << '\n';
        }
    if(card.rank == 0 && card.suit == 4)
        {
        std::cout << "Descripcion = " << "Mancha de pis en los pantalones"  << "  "
        << "Indice = " << "2.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 5)
        {
        std::cout << "Descripcion = " << "Te  caga un pajaro en la cabeza"  << "  "
        << "Indice = " << "3" << '\n';
        }
    if(card.rank == 0 && card.suit == 6)
        {
        std::cout << "Descripcion = " << "Una ardilla en casa"  << "  "
        << "Indice = " << "3.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 7)
        {
        std::cout << "Descripcion = " << "Te comes un donut de mermelada. Espera eso no era mermelada…. ¡ Era Moho"  << "  "
        << "Indice = " << "4" << '\n';
        }
    if(card.rank == 0 && card.suit == 8)
        {
        std::cout << "Descripcion = " << "Cancelan tu programa favorito"  << "  "
        << "Indice = " << "4.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 9)
        {
        std::cout << "Descripcion = " << "Llagas en la lengua"  << "  "
        << "Indice = " << "5" << '\n';
        }
    if(card.rank == 0 && card.suit == 10)
        {
        std::cout << "Descripcion = " << "Multa de aparcamiento 100$"  << "  "
        << "Indice = " << "5.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 11)
        {
        std::cout << "Descripcion = " << "Rueda pinchada"  << "  "
        << "Indice = " << "6" << '\n';
        }
    if(card.rank == 0 && card.suit == 12)
        {
        std::cout << "Descripcion = " << "Primera cana"  << "  "
        << "Indice = " << "6.5" << '\n';
        }
    if(card.rank == 0 && card.suit ==13 )
        {
        std::cout << "Descripcion = " << "Tu compañero te roba la comida"  << "  "
        << "Indice = " << "7" << '\n';
        }
    if(card.rank == 0 && card.suit == 14)
        {
        std::cout << "Descripcion = " << "Grano gigante en la nariz"  << "  "
        << "Indice = " << "7.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 15)
        {
        std::cout << "Descripcion = " << "Turbulencias en pleno vuelo"  << "  "
        << "Indice = " << "8" << '\n';
        }
    if(card.rank == 0 && card.suit == 16)
        {
        std::cout << "Descripcion = " << "Fallo del gabador del video… Se borran todos los programas"  << "  "
        << "Indice = " << "8.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 17)
        {
        std::cout << "Descripcion = " << "Asistes a una opera de 4 horas"  << "  "
        << "Indice = " << "9" << '\n';
        }
    if(card.rank == 0 && card.suit == 18)
        {
        std::cout << "Descripcion = " << "Te cagas en la cama"  << "  "
        << "Indice = " << "9.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 19)
        {
        std::cout << "Descripcion = " << "Piojos"  << "  "
        << "Indice = " << "10" << '\n';
        }
    if(card.rank == 0 && card.suit == 20)
        {
        std::cout << "Descripcion = " << "Uña del pie encarnada"  << "  "
        << "Indice = " << "10.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 21)
        {
        std::cout << "Descripcion = " << "Formas parte de un jurado"  << "  "
        << "Indice = " << "11" << '\n';
        }
    if(card.rank == 0 && card.suit == 22)
        {
        std::cout << "Descripcion = " << "Terrible corte de pelo"  << "  "
        << "Indice = " << "11.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 23)
        {
        std::cout << "Descripcion = " << "Te pillas el bello publico con la cremallera"  << "  "
        << "Indice = " << "12" << '\n';
        }
    if(card.rank == 0 && card.suit == 24)
        {
        std::cout << "Descripcion = " << "Tu madre se queja de su vida sexual tambaleandose borracha"  << "  "
        << "Indice = " << "12.5" << '\n';
        }
    if(card.rank == 0 && card.suit ==25 )
        {
        std::cout << "Descripcion = " << "Vuelo retrasado… Retrasado.. Finalmente cancelo"  << "  "
        << "Indice = " << "13" << '\n';
        }
    if(card.rank == 0 && card.suit == 26)
        {
        std::cout << "Descripcion = " << "Visita de la familia politica de una semana"  << "  "
        << "Indice = " << "13.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 27)
        {
        std::cout << "Descripcion = " << "Derrota importante de tu equipo por un error tuyo"  << "  "
        << "Indice = " << "14" << '\n';
        }
    if(card.rank == 0 && card.suit == 28)
        {
        std::cout << "Descripcion = " << "Enema"  << "  "
        << "Indice = " << "14.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 29)
        {
        std::cout << "Descripcion = " << "Bronca con un compañero"  << "  "
        << "Indice = " << "15" << '\n';
        }
    if(card.rank == 0 && card.suit == 30)
        {
        std::cout << "Descripcion = " << "Tu pareja grita el nombre de su examante durante el sexo"  << "  "
        << "Indice = " << "15.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 31)
        {
        std::cout << "Descripcion = " << "Te tiras  pedos sonoros continuamente en un funeral"  << "  "
        << "Indice = " << "16" << '\n';
        }
    if(card.rank == 0 && card.suit == 32)
        {
        std::cout << "Descripcion = " << "El vater se atasca durante el banquete"  << "  "
        << "Indice = " << "16.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 33)
        {
        std::cout << "Descripcion = " << "Tu vecino es O. J. Simpson"  << "  "
        << "Indice = " << "17" << '\n';
        }
    if(card.rank == 0 && card.suit == 34)
        {
        std::cout << "Descripcion = " << "Sexteas con tu madre por error"  << "  "
        << "Indice = " << "17.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 35)
        {
        std::cout << "Descripcion = " << "Bello publico en la sopa"  << "  "
        << "Indice = " << "18" << '\n';
        }
    if(card.rank == 0 && card.suit == 36)
        {
        std::cout << "Descripcion = " << "Te das con el martillo en el pulgar"  << "  "
        << "Indice = " << "18.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 37)
        {
        std::cout << "Descripcion = " << "Seia horas de vuelo sentado detrás de un bebe llorando"  << "  "
        << "Indice = " << "19" << '\n';
        }
    if(card.rank == 0 && card.suit == 38)
        {
        std::cout << "Descripcion = " << "Tu perro mata al conejito del vecino"  << "  "
        << "Indice = " << "19.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 39)
        {
        std::cout << "Descripcion = " << "Anzuelo en el pulgar"  << "  "
        << "Indice = " << "20" << '\n';
        }
    if(card.rank == 0 && card.suit == 40)
        {
        std::cout << "Descripcion = " << "Pelotazo en la cabeza"  << "  "
        << "Indice = " << "20.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 41)
        {
        std::cout << "Descripcion = " << "Ves a tu padre desnudo"  << "  "
        << "Indice = " << "21" << '\n';
        }
    if(card.rank == 0 && card.suit == 42)
        {
        std::cout << "Descripcion = " << "Un vagabundo siniestro te sigue a casa"  << "  "
        << "Indice = " << "21.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 43)
        {
        std::cout << "Descripcion = " << "Te pillas la mano con la puerta del coche"  << "  "
        << "Indice = " << "22" << '\n';
        }
    if(card.rank == 0 && card.suit == 44)
        {
        std::cout << "Descripcion = " << "te caes por las escaleras"  << "  "
        << "Indice = " << "22.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 45)
        {
        std::cout << "Descripcion = " << "Vomitas en publico"  << "  "
        << "Indice = " << "23" << '\n';
        }
    if(card.rank == 0 && card.suit == 46)
        {
        std::cout << "Descripcion = " << "Te chocas en bici contra la puerta de un coche"  << "  "
        << "Indice = " << "23.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 47)
        {
        std::cout << "Descripcion = " << "Un trozo de vidrio en la ensalada"  << "  "
        << "Indice = " << "24" << '\n';
        }
    if(card.rank == 0 && card.suit == 48)
        {
        std::cout << "Descripcion = " << "Te pica una medusa"  << "  "
        << "Indice = " << "24.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 49)
        {
        std::cout << "Descripcion = " << "Te rocia una mofeta"  << "  "
        << "Indice = " << "25" << '\n';
        }
    if(card.rank == 0 && card.suit == 50)
        {
        std::cout << "Descripcion = " << "Pillas a tus padres en la cama"  << "  "
        << "Indice = " << "25.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 51)
        {
        std::cout << "Descripcion = " << "Gas pimienta en los ojos"  << "  "
        << "Indice = " << "26" << '\n';
        }
    if(card.rank == 0 && card.suit == 52)
        {
        std::cout << "Descripcion = " << "Cuchilla de afeitar en el calcetin"  << "  "
        << "Indice = " << "26.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 53)
        {
        std::cout << "Descripcion = " << "Pisas un clavo oxidado"  << "  "
        << "Indice = " << "27" << '\n';
        }
    if(card.rank == 0 && card.suit == 54)
        {
        std::cout << "Descripcion = " << "Te disparan con una pistola electrica"  << "  "
        << "Indice = " << "27.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 55)
        {
        std::cout << "Descripcion = " << "Se te queda la lengua pegada a un mastil congelado"  << "  "
        << "Indice = " << "28" << '\n';
        }
    if(card.rank == 0 && card.suit == 56)
        {
        std::cout << "Descripcion = " << "Endodoncia"  << "  "
        << "Indice = " << "28.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 57)
        {
        std::cout << "Descripcion = " << "Comida de navidad con tu desestructurada familia"  << "  "
        << "Indice = " << "29" << '\n';
        }
    if(card.rank == 0 && card.suit == 58)
        {
        std::cout << "Descripcion = " << "Te rajan las cuatro ruedas"  << "  "
        << "Indice = " << "29.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 59)
        {
        std::cout << "Descripcion = " << "Una rata viva en tu vater"  << "  "
        << "Indice = " << "30" << '\n';
        }
    if(card.rank == 0 && card.suit == 60)
        {
        std::cout << "Descripcion = " << "20 minutos de registro corporal completo por los agentes de seguridad"  << "  "
        << "Indice = " << "30.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 61)
        {
        std::cout << "Descripcion = " << "Sueño erotico con tu padre"  << "  "
        << "Indice = " << "31" << '\n';
        }
    if(card.rank == 0 && card.suit == 62)
        {
        std::cout << "Descripcion = " << "Es la noche mas fria del año: se estropea el radiador"  << "  "
        << "Indice = " << "31.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 63)
        {
        std::cout << "Descripcion = " << "Te cagas encima en publico"  << "  "
        << "Indice = " << "32" << '\n';
        }
    if(card.rank == 0 && card.suit == 64)
        {
        std::cout << "Descripcion = " << "Te limpias el culo con hiedra venenosa"  << "  "
        << "Indice = " << "32.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 65)
        {
        std::cout << "Descripcion = " << "Te quedas dormido en la playa: Quemaduras de tercer grado"  << "  "
        << "Indice = " << "33" << '\n';
        }
    if(card.rank == 0 && card.suit == 66)
        {
        std::cout << "Descripcion = " << "Desatascas el vater con tus propias manos"  << "  "
        << "Indice = " << "33.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 67)
        {
        std::cout << "Descripcion = " << "Apagon electrico durante cuatro dias"  << "  "
        << "Indice = " << "34" << '\n';
        }
    if(card.rank == 0 && card.suit == 68)
        {
        std::cout << "Descripcion = " << "Tu vecino favorito muere"  << "  "
        << "Indice = " << "34.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 69)
        {
        std::cout << "Descripcion = " << "Tu puñetero ex gana la puñetera loteria"  << "  "
        << "Indice = " << "35" << '\n';
        }
    if(card.rank == 0 && card.suit == 70)
        {
        std::cout << "Descripcion = " << "Pierdes una uña"  << "  "
        << "Indice = " << "35.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 71)
        {
        std::cout << "Descripcion = " << "El sotano se inunda"  << "  "
        << "Indice = " << "36" << '\n';
        }
    if(card.rank == 0 && card.suit == 72)
        {
        std::cout << "Descripcion = " << "Te quedas fuera de tu casa, desnudo y sin llaves"  << "  "
        << "Indice = " << "36.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 73)
        {
        std::cout << "Descripcion = " << "Tus padres leen tu diario"  << "  "
        << "Indice = " << "37" << '\n';
        }
    if(card.rank == 0 && card.suit == 74)
        {
        std::cout << "Descripcion = " << "Atrapado toda una noche en el ascensor con la cancion All I want for christmas is you de Mariah Carey sonando en bucie"  << "  "
        << "Indice = " << "37.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 75)
        {
        std::cout << "Descripcion = " << "Astilla en genitales"  << "  "
        << "Indice = " << "38" << '\n';
        }
    if(card.rank == 0 && card.suit == 76)
        {
        std::cout << "Descripcion = " << "Te despiertas resacoso y von un tatuaje de Whoopi Goldberg en el culo"  << "  "
        << "Indice = " << "38.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 77)
        {
        std::cout << "Descripcion = " << "Termitas"  << "  "
        << "Indice = " << "39" << '\n';
        }
    if(card.rank == 0 && card.suit == 78)
        {
        std::cout << "Descripcion = " << "La cagas en una entrevista de trabajo"  << "  "
        << "Indice = " << "39.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 79)
        {
        std::cout << "Descripcion = " << "Hemorroides"  << "  "
        << "Indice = " << "40" << '\n';
        }
    if(card.rank == 0 && card.suit == 80)
        {
        std::cout << "Descripcion = " << "Pierdes la cartera"  << "  "
        << "Indice = " << "40.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 81)
        {
        std::cout << "Descripcion = " << "Te caes en una fosa septica"  << "  "
        << "Indice = " << "41" << '\n';
        }
    if(card.rank == 0 && card.suit == 82)
        {
        std::cout << "Descripcion = " << "Tu equipo local favorito se traslada"  << "  "
        << "Indice = " << "41.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 83)
        {
        std::cout << "Descripcion = " << "Desarrollas alergias al alchool"  << "  "
        << "Indice = " << "42" << '\n';
        }
    if(card.rank == 0 && card.suit == 84)
        {
        std::cout << "Descripcion = " << "Tu madre te pilla masturbandote"  << "  "
        << "Indice = " << "42.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 85)
        {
        std::cout << "Descripcion = " << "Ladillas"  << "  "
        << "Indice = " << "43" << '\n';
        }
    if(card.rank == 0 && card.suit == 86)
        {
        std::cout << "Descripcion = " << "Le prestas 1.500 euros a un amigo"  << "  "
        << "Indice = " << "43.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 87)
        {
        std::cout << "Descripcion = " << "Se te cuela una araña por el oido"  << "  "
        << "Indice = " << "44" << '\n';
        }
    if(card.rank == 0 && card.suit == 88)
        {
        std::cout << "Descripcion = " << "Ves un video porno con tus padres"  << "  "
        << "Indice = " << "44.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 89)
        {
        std::cout << "Descripcion = " << "Se te cae el movil al vater"  << "  "
        << "Indice = " << "45" << '\n';
        }
    if(card.rank == 0 && card.suit == 90)
        {
        std::cout << "Descripcion = " << "Avispa en la boca"  << "  "
        << "Indice = " << "45.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 91)
        {
        std::cout << "Descripcion = " << "Condon roto"  << "  "
        << "Indice = " << "46" << '\n';
        }
    if(card.rank == 0 && card.suit == 92)
        {
        std::cout << "Descripcion = " << "Te comes un plato de espagueti de gusano"  << "  "
        << "Indice = " << "46.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 93)
        {
        std::cout << "Descripcion = " << "Pierdes el portatil"  << "  "
        << "Indice = " << "47" << '\n';
        }
    if(card.rank == 0 && card.suit == 94)
        {
        std::cout << "Descripcion = " << "Lejía en el ojo"  << "  "
        << "Indice = " << "47.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 95)
        {
        std::cout << "Descripcion = " << "Chinches"  << "  "
        << "Indice = " << "48" << '\n';
        }
    if(card.rank == 0 && card.suit == 96)
        {
        std::cout << "Descripcion = " << "Gota"  << "  "
        << "Indice = " << "48.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 97)
        {
        std::cout << "Descripcion = " << "Coz de caballo en la entrepierna"  << "  "
        << "Indice = " << "49" << '\n';
        }
    if(card.rank == 0 && card.suit == 98)
        {
        std::cout << "Descripcion = " << "Te retiran el carnet de conducir"  << "  "
        << "Indice = " << "49.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 99)
        {
        std::cout << "Descripcion = " << "En el restaurante: Encuentras un condón en tu hamburguesa"  << "  "
        << "Indice = " << "50" << '\n';
        }
    if(card.rank == 0 && card.suit == 100)
        {
        std::cout << "Descripcion = " << "Te enteras de que tu madre se metia acido durante el embarazo"  << "  "
        << "Indice = " << "50.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 101)
        {
        std::cout << "Descripcion = " << "Colon Irritable"  << "  "
        << "Indice = " << "51" << '\n';
        }
    if(card.rank == 0 && card.suit == 102)
        {
        std::cout << "Descripcion = " << "Dos semanas con migraña"  << "  "
        << "Indice = " << "51.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 103)
        {
        std::cout << "Descripcion = " << "Tu mejor amigo se casa con tu ex"  << "  "
        << "Indice = " << "52" << '\n';
        }
    if(card.rank == 0 && card.suit == 104)
        {
        std::cout << "Descripcion = " << "Insomnio cronico"  << "  "
        << "Indice = " << "52.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 105)
        {
        std::cout << "Descripcion = " << "Tu mejor amigo se muda"  << "  "
        << "Indice = " << "53" << '\n';
        }
    if(card.rank == 0 && card.suit == 106)
        {
        std::cout << "Descripcion = " << "Ves un video porno con tus padres"  << "  "
        << "Indice = " << "53.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 107)
        {
        std::cout << "Descripcion = " << "Sorpresa Vas a tener un bebe A los 23"  << "  "
        << "Indice = " << "54" << '\n';
        }
    if(card.rank == 0 && card.suit == 108)
        {
        std::cout << "Descripcion = " << "Tu hermano intenta llegar contigo"  << "  "
        << "Indice = " << "54.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 109)
        {
        std::cout << "Descripcion = " << "Encuentras el diario del abuelo Era Nazi"  << "  "
        << "Indice = " << "55" << '\n';
        }
    if(card.rank == 0 && card.suit == 110)
        {
        std::cout << "Descripcion = " << "Expulsas un calculo renal"  << "  "
        << "Indice = " << "55.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 111)
        {
        std::cout << "Descripcion = " << "Ves un video porno de tus padres con tus padres"  << "  "
        << "Indice = " << "56" << '\n';
        }
    if(card.rank == 0 && card.suit == 112)
        {
        std::cout << "Descripcion = " << "Tu pareja tiene herpes"  << "  "
        << "Indice = " << "56.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 113)
        {
        std::cout << "Descripcion = " << "Verrugas genitales"  << "  "
        << "Indice = " << "57" << '\n';
        }
    if(card.rank == 0 && card.suit == 114)
        {
        std::cout << "Descripcion = " << "Te muerde un murcielago"  << "  "
        << "Indice = " << "57.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 115)
        {
        std::cout << "Descripcion = " << "Sexo con la persona de mayor edad que conoces"  << "  "
        << "Indice = " << "58" << '\n';
        }
    if(card.rank == 0 && card.suit == 116)
        {
        std::cout << "Descripcion = " << "Inspección de hacienda"  << "  "
        << "Indice = " << "58.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 117)
        {
        std::cout << "Descripcion = " << "pillas a tu padre masturbandose"  << "  "
        << "Indice = " << "59" << '\n';
        }
    if(card.rank == 0 && card.suit == 118)
        {
        std::cout << "Descripcion = " << "Te roban el coche"  << "  "
        << "Indice = " << "59.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 119)
        {
        std::cout << "Descripcion = " << "Sangre en la orina"  << "  "
        << "Indice = " << "60" << '\n';
        }
    if(card.rank == 0 && card.suit == 120)
        {
        std::cout << "Descripcion = " << "Tu jefe te tira los tejos"  << "  "
        << "Indice = " << "60.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 121)
        {
        std::cout << "Descripcion = " << "Tu hijo te pilla masturbandote"  << "  "
        << "Indice = " << "61" << '\n';
        }
    if(card.rank == 0 && card.suit == 122)
        {
        std::cout << "Descripcion = " << "Un escorpión trepa por el culo de tu sobrino"  << "  "
        << "Indice = " << "61.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 123)
        {
        std::cout << "Descripcion = " << "Selfi Desnudo enviado por EMail a toda la oficina"  << "  "
        << "Indice = " << "62" << '\n';
        }
    if(card.rank == 0 && card.suit == 124)
        {
        std::cout << "Descripcion = " << "Eres atracado"  << "  "
        << "Indice = " << "62.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 125)
        {
        std::cout << "Descripcion = " << "La montaña rusa se para te quedas dos horas colgado boca abajo"  << "  "
        << "Indice = " << "63" << '\n';
        }
    if(card.rank == 0 && card.suit == 126)
        {
        std::cout << "Descripcion = " << "Visitas un club de Striptease tu hija es una de las bailarinas"  << "  "
        << "Indice = " << "63.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 127)
        {
        std::cout << "Descripcion = " << "Tienes la tenia"  << "  "
        << "Indice = " << "64" << '\n';
        }
    if(card.rank == 0 && card.suit == 128)
        {
        std::cout << "Descripcion = " << "Desarrollas agrofobia No puedes salir de casa"  << "  "
        << "Indice = " << "64.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 129)
        {
        std::cout << "Descripcion = " << "Cae un arbol sobre tu casa"  << "  "
        << "Indice = " << "65" << '\n';
        }
    if(card.rank == 0 && card.suit == 130)
        {
        std::cout << "Descripcion = " << "Te añaden a la lista de exclusion aerea"  << "  "
        << "Indice = " << "65.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 131)
        {
        std::cout << "Descripcion = " << "Te hace una prueba de ADN Tu padre no es tu padre"  << "  "
        << "Indice = " << "66" << '\n';
        }
    if(card.rank == 0 && card.suit == 132)
        {
        std::cout << "Descripcion = " << "Te roban la identidad"  << "  "
        << "Indice = " << "66.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 133)
        {
        std::cout << "Descripcion = " << "Estás despedido"  << "  "
        << "Indice = " << "67" << '\n';
        }
    if(card.rank == 0 && card.suit == 134)
        {
        std::cout << "Descripcion = " << "Copas con Bill Cosby"  << "  "
        << "Indice = " << "67.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 135)
        {
        std::cout << "Descripcion = " << "Tus mascota se pierde"  << "  "
        << "Indice = " << "68" << '\n';
        }
    if(card.rank == 0 && card.suit == 136)
        {
        std::cout << "Descripcion = " << "Mojas la cama todas las noches"  << "  "
        << "Indice = " << "68.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 137)
        {
        std::cout << "Descripcion = " << "Ganas el euromillón… Has perdido el resguardo"  << "  "
        << "Indice = " << "69" << '\n';
        }
    if(card.rank == 0 && card.suit == 138)
        {
        std::cout << "Descripcion = " << "Tu mujer confiesa Has estado criando al hijo de su exnovio"  << "  "
        << "Indice = " << "69.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 139)
        {
        std::cout << "Descripcion = " << "Te trasladan a somalia por trabajo"  << "  "
        << "Indice = " << "70" << '\n';
        }
    if(card.rank == 0 && card.suit == 140)
        {
        std::cout << "Descripcion = " << "Tu padre se cambia de sexo"  << "  "
        << "Indice = " << "70.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 141)
        {
        std::cout << "Descripcion = " << "Te ataca un ejambre de abejas"  << "  "
        << "Indice = " << "71" << '\n';
        }
    if(card.rank == 0 && card.suit == 142)
        {
        std::cout << "Descripcion = " << "Pierdes el meñique"  << "  "
        << "Indice = " << "71.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 143)
        {
        std::cout << "Descripcion = " << "Te despiertas de la anestecia durante tu operación de apendicitis"  << "  "
        << "Indice = " << "72" << '\n';
        }
    if(card.rank == 0 && card.suit == 144)
        {
        std::cout << "Descripcion = " << "Mike Tyson te mete un puño por el culo"  << "  "
        << "Indice = " << "72.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 145)
        {
        std::cout << "Descripcion = " << "Te disparan en una piscina"  << "  "
        << "Indice = " << "73" << '\n';
        }
    if(card.rank == 0 && card.suit == 146)
        {
        std::cout << "Descripcion = " << "Deportado por error"  << "  "
        << "Indice = " << "73.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 147)
        {
        std::cout << "Descripcion = " << "Vas a la deriva con Charlie Sheen debes beberte su orina"  << "  "
        << "Indice = " << "74" << '\n';
        }
    if(card.rank == 0 && card.suit == 148)
        {
        std::cout << "Descripcion = " << "Te enteras de que tu pareja es primo hermano tuyo"  << "  "
        << "Indice = " << "74.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 149)
        {
        std::cout << "Descripcion = " << "La bronca rasista de tu conyuge se hace viral"  << "  "
        << "Indice = " << "75" << '\n';
        }
    if(card.rank == 0 && card.suit == 150)
        {
        std::cout << "Descripcion = " << "Te bebes un Batido de vomito"  << "  "
        << "Indice = " << "75.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 151)
        {
        std::cout << "Descripcion = " << "Te comes un platano mojado en Diarrea"  << "  "
        << "Indice = " << "76" << '\n';
        }
    if(card.rank == 0 && card.suit == 152)
        {
        std::cout << "Descripcion = " << "Atacado por un chimpance loco"  << "  "
        << "Indice = " << "76.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 153)
        {
        std::cout << "Descripcion = " << "Gran terremoto"  << "  "
        << "Indice = " << "77" << '\n';
        }
    if(card.rank == 0 && card.suit == 154)
        {
        std::cout << "Descripcion = " << "Hueles a pedo el resto de tu vida"  << "  "
        << "Indice = " << "77.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 155)
        {
        std::cout << "Descripcion = " << "Quiebra"  << "  "
        << "Indice = " << "78" << '\n';
        }
    if(card.rank == 0 && card.suit == 156)
        {
        std::cout << "Descripcion = " << "Un video tuyo masturbandote se hace viral"  << "  "
        << "Indice = " << "78.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 157)
        {
        std::cout << "Descripcion = " << "Tu conyuge se vuelve alcoholico"  << "  "
        << "Indice = " << "79" << '\n';
        }
    if(card.rank == 0 && card.suit == 158)
        {
        std::cout << "Descripcion = " << "Pierdes el pelo por todas partes"  << "  "
        << "Indice = " << "79.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 159)
        {
        std::cout << "Descripcion = " << "Te despiertas cubierto de hormigas de fuego"  << "  "
        << "Indice = " << "80" << '\n';
        }
    if(card.rank == 0 && card.suit == 160)
        {
        std::cout << "Descripcion = " << "Bote de ketchup atascado en el culo"  << "  "
        << "Indice = " << "80.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 161)
        {
        std::cout << "Descripcion = " << "Jerbo vivo atascado en el culo "  << "  "
        << "Indice = " << "81" << '\n';
        }
    if(card.rank == 0 && card.suit == 162)
        {
        std::cout << "Descripcion = " << "Tus padres se separan"  << "  "
        << "Indice = " << "81.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 163)
        {
        std::cout << "Descripcion = " << "Tu conyuge se folla a la persona de tu izquierda"  << "  "
        << "Indice = " << "82" << '\n';
        }
    if(card.rank == 0 && card.suit == 164)
        {
        std::cout << "Descripcion = " << "tu hija adolescente se queda embarazada"  << "  "
        << "Indice = " << "82.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 165)
        {
        std::cout << "Descripcion = " << "Pierdes siete dedos de los pies por congelación"  << "  "
        << "Indice = " << "83" << '\n';
        }
    if(card.rank == 0 && card.suit == 166)
        {
        std::cout << "Descripcion = " << "Tienes diarrea explosiva cada vez que llegas al orgasmo"  << "  "
        << "Indice = " << "83.5." << '\n';
        }
    if(card.rank == 0 && card.suit == 167)
        {
        std::cout << "Descripcion = " << "Se incendia tu casa"  << "  "
        << "Indice = " << "84" << '\n';
        }
    if(card.rank == 0 && card.suit == 168)
        {
        std::cout << "Descripcion = " << "Vas a tener trillizos"  << "  "
        << "Indice = " << "84.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 169)
        {
        std::cout << "Descripcion = " << "El cortacesped te mutila un pie"  << "  "
        << "Indice = " << "85" << '\n';
        }
    if(card.rank == 0 && card.suit == 170)
        {
        std::cout << "Descripcion = " << "Traficantes de organos te dorgan y te roban el riñón"  << "  "
        << "Indice = " << "85.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 171)
        {
        std::cout << "Descripcion = " << "Hace un año que tu conyuge tiene una aventura"  << "  "
        << "Indice = " << "86" << '\n';
        }
    if(card.rank == 0 && card.suit == 172)
        {
        std::cout << "Descripcion = " << "Pasas un año en una prisión tercermundista"  << "  "
        << "Indice = " << "86.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 173)
        {
        std::cout << "Descripcion = " << "Tu conyuge te pilla masturbando a un perro"  << "  "
        << "Indice = " << "87" << '\n';
        }
    if(card.rank == 0 && card.suit == 174)
        {
        std::cout << "Descripcion = " << "Herida en la cabeza Pierdes 10m puntos de CI"  << "  "
        << "Indice = " << "87.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 175)
        {
        std::cout << "Descripcion = " << "Ataque de hipo incurable"  << "  "
        << "Indice = " << "88" << '\n';
        }
    if(card.rank == 0 && card.suit == 176)
        {
        std::cout << "Descripcion = " << "Desarollas tourette Dices tacos constantemente "  << "  "
        << "Indice = " << "88.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 177)
        {
        std::cout << "Descripcion = " << "Te arrancas la lengua de un mordisco"  << "  "
        << "Indice = " << "89" << '\n';
        }
    if(card.rank == 0 && card.suit ==178 )
        {
        std::cout << "Descripcion = " << "Sexo fraternal"  << "  "
        << "Indice = " << "89.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 179)
        {
        std::cout << "Descripcion = " << "Te cogen como rehen en un atraco bancario"  << "  "
        << "Indice = " << "90" << '\n';
        }
    if(card.rank == 0 && card.suit == 180)
        {
        std::cout << "Descripcion = " << "Corneado por un toro"  << "  "
        << "Indice = " << "90.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 181)
        {
        std::cout << "Descripcion = " << "Tu lifting facial sale terriblemente mal"  << "  "
        << "Indice = " << "91" << '\n';
        }
    if(card.rank == 0 && card.suit == 182)
        {
        std::cout << "Descripcion = " << "Una prostituta muerta en tu cama"  << "  "
        << "Indice = " << "91.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 183)
        {
        std::cout << "Descripcion = " << "Te amputan un brazo"  << "  "
        << "Indice = " << "92" << '\n';
        }
    if(card.rank == 0 && card.suit == 184)
        {
        std::cout << "Descripcion = " << "Media prostituta muerta en tu cama"  << "  "
        << "Indice = " << "92.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 185)
        {
        std::cout << "Descripcion = " << "Te cae encima un rayo"  << "  "
        << "Indice = " << "93" << '\n';
        }
    if(card.rank == 0 && card.suit == 186)
        {
        std::cout << "Descripcion = " << "Una serpiente de cascabel te muerde los genitales"  << "  "
        << "Indice = " << "93.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 187)
        {
        std::cout << "Descripcion = " << "El ISIS emite una fetua contra TI"  << "  "
        << "Indice = " << "94" << '\n';
        }
    if(card.rank == 0 && card.suit == 188)
        {
        std::cout << "Descripcion = " << "Te estrellas en los andes Te comes a tus amigos para sobrevivir"  << "  "
        << "Indice = " << "94.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 189)
        {
        std::cout << "Descripcion = " << "El cirujano te amputa la pierna equivocada"  << "  "
        << "Indice = " << "95" << '\n';
        }
    if(card.rank == 0 && card.suit == 190)
        {
        std::cout << "Descripcion = " << "Te quedas mudo"  << "  "
        << "Indice = " << "95.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 191)
        {
        std::cout << "Descripcion = " << "Te quedas sordo"  << "  "
        << "Indice = " << "96" << '\n';
        }
    if(card.rank == 0 && card.suit == 192)
        {
        std::cout << "Descripcion = " << "Te ataca un tiburon Pierdes un brazo y una pierna"  << "  "
        << "Indice = " << "96.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 193)
        {
        std::cout << "Descripcion = " << "Amnesia total"  << "  "
        << "Indice = " << "97" << '\n';
        }
    if(card.rank == 0 && card.suit == 194)
        {
        std::cout << "Descripcion = " << "Adicto a la heroína"  << "  "
        << "Indice = " << "97.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 195)
        {
        std::cout << "Descripcion = " << "Te montas un trio con tus padres"  << "  "
        << "Indice = " << "98" << '\n';
        }
    if(card.rank == 0 && card.suit == 196)
        {
        std::cout << "Descripcion = " << "Sexo no consentido con un oso"  << "  "
        << "Indice = " << "98.5" << '\n';
        }
    if(card.rank == 0 && card.suit == 197)
        {
        std::cout << "Descripcion = " << "Atrapado en una trampa para osos tines sexo no consentido con uno"  << "  "
        << "Indice = " << "99" << '\n';
        }
    if(card.rank == 0 && card.suit == 198)
        {
        std::cout << "Descripcion = " << "Te quedas ciego"  << "  "
        << "Indice = " << "99.5" << '\n';
        }
}

void shuffle(Deck& deck)
{
    Deck shuffled;
    while(!deck.cards.empty())
    {
        size_t rand_index = rand() % deck.cards.size();
        shuffled.cards.push_back(deck.cards[rand_index]);
        deck.cards.erase(deck.cards.begin() + rand_index);
    }
    
    deck = shuffled;
        
}

bool deal_cards(Game& game)
{
    if(game.deck.cards.size() < game.num_players * game.num_cards_per_hand)
    {
        return false;
    }
    
    for(int card = 0; card < game.num_cards_per_hand; card++)
    {
        for(int player =0; player < game.num_players; player++)
        {
            game.players[player].hand.push_back(game.deck.cards[0]);
            game.deck.cards.erase(game.deck.cards.begin());
        }
    }
    return true;
}

void print_hand(const vector<Card>& hand)
{
    for(Card c : hand)
    {
        print_card(c);
    }
}

void initialize(Game& game)
{
    initialize(game.deck);
    shuffle(game.deck);
    add_players(game);
    
}

void add_players(Game& game)
{
    for(int player =0; player < game.num_players; player++)
    {
        Player new_player;
        game.players.push_back(new_player);
    }
}

void print_game(const Game& game)
{
    for(int player = 0; player < game.num_players; player++)
    {
        print_hand(game.players[player].hand);
        std::cout<< '\n';
    }
    
    print_deck(game.deck);
}


