#ifndef CHRISTMASLIGHTS_H
#define CHRISTMASLIGHTS_H

class ChristmasLights {
    private:
        virtual void initLogging();
        virtual void initServices();

    public:
        ChristmasLights();
        virtual ~ChristmasLights();
};

#endif /* CHRISTMASLIGHTS_H */
