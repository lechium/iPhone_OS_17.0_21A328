//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable
{
    NSData *_continuationMarker;	// 8 = 0x8
    NSMutableArray *_queryResults;	// 16 = 0x10
}

+ (Class)queryResultsType;	// IMP=0x0010000000274286
- (void).cxx_destruct;	// IMP=0x0000000000274ebb
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *queryResults; // @synthesize queryResults=_queryResults;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000274cf7
- (unsigned long long)hash;	// IMP=0x0000000000274caa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000274bf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002749e6
- (void)copyTo:(id)arg1;	// IMP=0x00000000002748fe
- (void)writeTo:(id)arg1;	// IMP=0x000000000027479e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000274791
- (id)dictionaryRepresentation;	// IMP=0x000000000027435b
- (id)description;	// IMP=0x00000000002742ac
@property(readonly, nonatomic) _Bool hasContinuationMarker;
- (id)queryResultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000274269
- (unsigned long long)queryResultsCount;	// IMP=0x000000000027424c
- (void)addQueryResults:(id)arg1;	// IMP=0x00000000002741e2
- (void)clearQueryResults;	// IMP=0x00000000002741c5

@end
