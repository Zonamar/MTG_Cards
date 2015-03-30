//
//  MagicCard.h
//  MTG_Practice
//
//  Created by Christian Larsen on 3/30/15.
//
//

#ifndef __MTG_Practice__MagicCard__
#define __MTG_Practice__MagicCard__

#include <stdio.h>
#include <string>
#include <vector>
#include "MagicRule.h"




enum ManaType{                                              // MANA TYPES FOR CASTING MANA
                COLORLESS,
                MOUNTAIN,
                PLAINS,
                ISLAND,
                SWAMP,
                FOREST,
                PLAINS_ISLAND,
                ISLAND_SWAMP,
                SWAMP_MOUTAIN,
                MOUNTAIN_FOREST,
                FOREST_PLAINS,
                PLAINS_SWAMP,
                ISLAND_MOUNTAIN,
                SWAMP_FOREST,
                MOUNTAIN_PLAINS,
                FOREST_ISLAND,
                COLORLESS_PLAINS,
                COLORLESS_ISLAND,
                COLORLESS_SWAMP,
                COLORLESS_MOUNTAIN,
                COLORLESS_FOREST,
                X_MANA,
    
                NUM_MANA_TYPES,
};

enum CardType{
    
                LAND,
                ARTIFACT,
                ENCHANTMENT,
                PLANESWALKER,
                INSTANT,
                SORCERIE,
                PHENOMENON,
                SCHEME,
                VANGAURD,
                CONSPIRACY,
                CREATURE,
                PLANES,
    
    
    
                NUM_CARD_TYPES,

};

enum SuperType{
                BASIC,
                LEGENDARY,
                ONGOING,
                SNOW,
                WORLD,
    
                NUM_SUPER_TYPES,
    
};


enum Rarity{
                Mythic,
                Rare,
                Uncommon,
                Common,
                TIMESHIFTED,
    
    
};


class MagicCard{
    
    
public:
    MagicCard();
    ~MagicCard();
    
    
    
private:
    
    std::string _cardName;
    std::vector<ManaType> _manaCost;
    std::string _artwork;
    
    
    std::vector<CardType> _cardType;
    std::vector<std::string>_cardSubType;
    std::vector<SuperType> _cardSuperType;
    Rarity  _cardRarity;
    std::string _cardSet;
    
    std::vector<MagicRule>  _cardEffects;
    std::string _flavorText;
    
    int _cardPower;
    int _cardToughness;
    
    int _collectorNumber;
    
    
    
};



#endif /* defined(__MTG_Practice__MagicCard__) */
