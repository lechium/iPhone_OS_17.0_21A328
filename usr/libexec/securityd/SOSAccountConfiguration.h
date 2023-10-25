//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface SOSAccountConfiguration : PBCodable
{
    NSMutableArray *_pendingBackupPeers;	// 8 = 0x8
    _Bool _ringUpdateFlag;	// 16 = 0x10
    struct {
        unsigned int ringUpdateFlag:1;
    } _has;	// 20 = 0x14
}

+ (Class)pendingBackupPeersType;	// IMP=0x0020000000230b5b
- (void).cxx_destruct;	// IMP=0x0020000000230b48
@property(nonatomic) _Bool ringUpdateFlag; // @synthesize ringUpdateFlag=_ringUpdateFlag;
@property(retain, nonatomic) NSMutableArray *pendingBackupPeers; // @synthesize pendingBackupPeers=_pendingBackupPeers;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000023099e
- (unsigned long long)hash;	// IMP=0x001000000023094b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000230881
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000230692
- (void)copyTo:(id)arg1;	// IMP=0x00100000002305b1
- (void)writeTo:(id)arg1;	// IMP=0x0010000000230449
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000230244
- (id)dictionaryRepresentation;	// IMP=0x0010000000230182
- (id)description;	// IMP=0x00100000002300d3
@property(nonatomic) _Bool hasRingUpdateFlag;
- (id)pendingBackupPeersAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000230071
- (unsigned long long)pendingBackupPeersCount;	// IMP=0x0010000000230054
- (void)addPendingBackupPeers:(id)arg1;	// IMP=0x001000000022ffea
- (void)clearPendingBackupPeers;	// IMP=0x001000000022ffcd

@end
