//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface AMPMusicArtistContent : PBCodable
{
    long long _adamId;	// 8 = 0x8
    NSMutableArray *_catalogContents;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    struct {
        unsigned int adamId:1;
    } _has;	// 32 = 0x20
}

+ (Class)catalogContentType;	// IMP=0x00200000000baf55
- (void).cxx_destruct;	// IMP=0x00200000000bacaa
@property(retain, nonatomic) NSMutableArray *catalogContents; // @synthesize catalogContents=_catalogContents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000baab9
- (unsigned long long)hash;	// IMP=0x00100000000baa3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ba954
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ba74f
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ba64a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ba4d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ba4c5
- (id)dictionaryRepresentation;	// IMP=0x00100000000ba217
- (id)description;	// IMP=0x00100000000ba168
- (id)catalogContentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ba14b
- (unsigned long long)catalogContentsCount;	// IMP=0x00100000000ba12e
- (void)addCatalogContent:(id)arg1;	// IMP=0x00100000000ba0c4
- (void)clearCatalogContents;	// IMP=0x00100000000ba0a7
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasAdamId;

@end

