//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IPCLoadDirectionsMessage, NSData;

@interface IPCStartNavigationMessage
{
    _Bool _originIsWatch;	// 8 = 0x8
    IPCLoadDirectionsMessage *_loadDirectionsMessage;	// 16 = 0x10
    NSData *_routeID;	// 24 = 0x18
    unsigned long long _routeIndex;	// 32 = 0x20
}

+ (id)startNavigationMessageWithLoadDirectionsMessage:(id)arg1;	// IMP=0x0040000000787cbc
- (void).cxx_destruct;	// IMP=0x00200000007882f8
@property(nonatomic) unsigned long long routeIndex; // @synthesize routeIndex=_routeIndex;
@property(copy, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) _Bool originIsWatch; // @synthesize originIsWatch=_originIsWatch;
@property(retain, nonatomic) IPCLoadDirectionsMessage *loadDirectionsMessage; // @synthesize loadDirectionsMessage=_loadDirectionsMessage;
- (_Bool)matchesLoadDirectionsMessage:(id)arg1;	// IMP=0x0010000000788170
- (id)description;	// IMP=0x00100000007880c1
- (id)dictionaryValue;	// IMP=0x0010000000787ef1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000787d0e

@end
