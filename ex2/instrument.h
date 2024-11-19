#ifndef INSTRUMENT_H
#define INSTRUMENT_H

class Instrument {
public:
    virtual void jouer() const = 0;  // Méthode virtuelle pure
    virtual ~Instrument() = default;
};

#endif // INSTRUMENT_H
