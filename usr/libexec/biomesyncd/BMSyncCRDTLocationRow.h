//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStreamCRDTLocation;

@interface BMSyncCRDTLocationRow : NSObject
{
    BMStreamCRDTLocation *_location;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _primaryKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0010000000002e81
@property(readonly, nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) BMStreamCRDTLocation *location; // @synthesize location=_location;
- (unsigned long long)hash;	// IMP=0x0010000000002df6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002d42
- (id)description;	// IMP=0x0010000000002cf1
- (id)initWithLocation:(id)arg1 state:(unsigned long long)arg2 primaryKey:(unsigned long long)arg3;	// IMP=0x0010000000002c70
- (id)initWithLocation:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x0010000000002c5b
- (id)initWithFMResultSet:(id)arg1 modifier:(unsigned long long)arg2;	// IMP=0x0010000000002e91

@end

