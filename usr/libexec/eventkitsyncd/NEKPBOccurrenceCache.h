//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NEKPBOccurrenceCache : PBCodable
{
    double _end;	// 8 = 0x8
    double _start;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    struct {
        unsigned int end:1;
        unsigned int start:1;
    } _has;	// 32 = 0x20
}

+ (Class)itemsType;	// IMP=0x0020000000001deb
- (void).cxx_destruct;	// IMP=0x0020000000002d91
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000002bb2
- (unsigned long long)hash;	// IMP=0x001000000000299a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000028ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000002694
- (void)copyTo:(id)arg1;	// IMP=0x001000000000258e
- (void)writeTo:(id)arg1;	// IMP=0x001000000000240e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000002401
- (id)dictionaryRepresentation;	// IMP=0x0010000000001eab
- (id)description;	// IMP=0x0010000000001dfc
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000001dce
- (unsigned long long)itemsCount;	// IMP=0x0010000000001db1
- (void)addItems:(id)arg1;	// IMP=0x0010000000001d47
- (void)clearItems;	// IMP=0x0010000000001d2a
@property(nonatomic) _Bool hasEnd;
@property(nonatomic) _Bool hasStart;

@end
