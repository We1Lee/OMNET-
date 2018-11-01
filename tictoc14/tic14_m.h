//
// Generated file, do not edit! Created by nedtool 5.2 from tic14.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __TIC14_M_H
#define __TIC14_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0502
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>tic14.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * message Tic14
 * {
 *     int source;
 *     int destination;
 *     int hopCount = 0;
 * }
 * </pre>
 */
class Tic14 : public ::omnetpp::cMessage
{
  protected:
    int source;
    int destination;
    int hopCount;

  private:
    void copy(const Tic14& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Tic14&);

  public:
    Tic14(const char *name=nullptr, short kind=0);
    Tic14(const Tic14& other);
    virtual ~Tic14();
    Tic14& operator=(const Tic14& other);
    virtual Tic14 *dup() const override {return new Tic14(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSource() const;
    virtual void setSource(int source);
    virtual int getDestination() const;
    virtual void setDestination(int destination);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Tic14& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Tic14& obj) {obj.parsimUnpack(b);}


#endif // ifndef __TIC14_M_H
