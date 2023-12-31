//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable
{
    NSMutableArray *_conflictLoserEtags;	// 8 = 0x8
}

+ (Class)conflictLoserEtagsType;	// IMP=0x00100000002f3497
- (void).cxx_destruct;	// IMP=0x00000000002f3cf1
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f3b93
- (unsigned long long)hash;	// IMP=0x00000000002f3b76
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f3ae6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f3922
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f385d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f3727
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f371a
- (id)dictionaryRepresentation;	// IMP=0x00000000002f3557
- (id)description;	// IMP=0x00000000002f34a8
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002f347a
- (unsigned long long)conflictLoserEtagsCount;	// IMP=0x00000000002f345d
- (void)addConflictLoserEtags:(id)arg1;	// IMP=0x00000000002f33f3
- (void)clearConflictLoserEtags;	// IMP=0x00000000002f33d6

@end

