//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NEKPBDuplicateCheck : PBCodable
{
    NSMutableArray *_calendars;	// 8 = 0x8
    NSMutableArray *_sources;	// 16 = 0x10
}

+ (Class)calendarsType;	// IMP=0x002000000003cd85
+ (Class)sourcesType;	// IMP=0x001000000003ccb3
- (void).cxx_destruct;	// IMP=0x002000000003de42
@property(retain, nonatomic) NSMutableArray *calendars; // @synthesize calendars=_calendars;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003dbae
- (unsigned long long)hash;	// IMP=0x001000000003db61
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003daa9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003d7a9
- (void)copyTo:(id)arg1;	// IMP=0x001000000003d653
- (void)writeTo:(id)arg1;	// IMP=0x001000000003d43c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003d42f
- (id)dictionaryRepresentation;	// IMP=0x001000000003ce45
- (id)description;	// IMP=0x001000000003cd96
- (id)calendarsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003cd68
- (unsigned long long)calendarsCount;	// IMP=0x001000000003cd4b
- (void)addCalendars:(id)arg1;	// IMP=0x001000000003cce1
- (void)clearCalendars;	// IMP=0x001000000003ccc4
- (id)sourcesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003cc96
- (unsigned long long)sourcesCount;	// IMP=0x001000000003cc79
- (void)addSources:(id)arg1;	// IMP=0x001000000003cc0f
- (void)clearSources;	// IMP=0x001000000003cbf2

@end

