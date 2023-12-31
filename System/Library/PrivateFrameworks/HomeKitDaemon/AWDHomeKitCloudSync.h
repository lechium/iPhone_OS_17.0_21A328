//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDHomeKitCloudSync : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _dataSyncState;	// 16 = 0x10
    unsigned int _fetchCount;	// 20 = 0x14
    unsigned int _homeDataMegabytesFetched;	// 24 = 0x18
    unsigned int _homeDataMegabytesPushed;	// 28 = 0x1c
    unsigned int _homeManagerFetchCount;	// 32 = 0x20
    unsigned int _homeManagerUploadCount;	// 36 = 0x24
    unsigned int _homeZoneFetchCount;	// 40 = 0x28
    unsigned int _homeZoneUploadCount;	// 44 = 0x2c
    unsigned int _legacyHomeDataMegabytesFetched;	// 48 = 0x30
    unsigned int _legacyHomeDataMegabytesPushed;	// 52 = 0x34
    unsigned int _pushCount;	// 56 = 0x38
    NSMutableArray *_topErrors;	// 64 = 0x40
    NSMutableArray *_topReasons;	// 72 = 0x48
    unsigned int _uploadCount;	// 80 = 0x50
    unsigned int _uploadErrorCount;	// 84 = 0x54
    _Bool _hasDecryptionFailed;	// 88 = 0x58
    _Bool _lastDecryptionFailed;	// 89 = 0x59
    _Bool _uploadMaximumDelayReached;	// 90 = 0x5a
    struct {
        unsigned int timestamp:1;
        unsigned int dataSyncState:1;
        unsigned int fetchCount:1;
        unsigned int homeDataMegabytesFetched:1;
        unsigned int homeDataMegabytesPushed:1;
        unsigned int homeManagerFetchCount:1;
        unsigned int homeManagerUploadCount:1;
        unsigned int homeZoneFetchCount:1;
        unsigned int homeZoneUploadCount:1;
        unsigned int legacyHomeDataMegabytesFetched:1;
        unsigned int legacyHomeDataMegabytesPushed:1;
        unsigned int pushCount:1;
        unsigned int uploadCount:1;
        unsigned int uploadErrorCount:1;
        unsigned int hasDecryptionFailed:1;
        unsigned int lastDecryptionFailed:1;
        unsigned int uploadMaximumDelayReached:1;
    } _has;	// 92 = 0x5c
}

+ (Class)topErrorsType;	// IMP=0x001000000050753d
+ (Class)topReasonsType;	// IMP=0x001000000050752c
- (void).cxx_destruct;	// IMP=0x00000000005074fb
@property(nonatomic) unsigned int legacyHomeDataMegabytesPushed; // @synthesize legacyHomeDataMegabytesPushed=_legacyHomeDataMegabytesPushed;
@property(nonatomic) unsigned int legacyHomeDataMegabytesFetched; // @synthesize legacyHomeDataMegabytesFetched=_legacyHomeDataMegabytesFetched;
@property(nonatomic) unsigned int homeDataMegabytesPushed; // @synthesize homeDataMegabytesPushed=_homeDataMegabytesPushed;
@property(nonatomic) unsigned int homeDataMegabytesFetched; // @synthesize homeDataMegabytesFetched=_homeDataMegabytesFetched;
@property(nonatomic) unsigned int homeZoneUploadCount; // @synthesize homeZoneUploadCount=_homeZoneUploadCount;
@property(nonatomic) unsigned int homeManagerUploadCount; // @synthesize homeManagerUploadCount=_homeManagerUploadCount;
@property(nonatomic) unsigned int homeZoneFetchCount; // @synthesize homeZoneFetchCount=_homeZoneFetchCount;
@property(nonatomic) unsigned int homeManagerFetchCount; // @synthesize homeManagerFetchCount=_homeManagerFetchCount;
@property(nonatomic) _Bool lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property(nonatomic) _Bool hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property(nonatomic) _Bool uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;
@property(retain, nonatomic) NSMutableArray *topErrors; // @synthesize topErrors=_topErrors;
@property(retain, nonatomic) NSMutableArray *topReasons; // @synthesize topReasons=_topReasons;
@property(nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property(nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property(nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000506f20
- (unsigned long long)hash;	// IMP=0x0000000000506ca8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005068d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000050638f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000506057
- (void)writeTo:(id)arg1;	// IMP=0x0000000000505bf8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000050509a
- (id)dictionaryRepresentation;	// IMP=0x00000000005046a9
- (id)description;	// IMP=0x00000000005045fa
@property(nonatomic) _Bool hasLegacyHomeDataMegabytesPushed;
@property(nonatomic) _Bool hasLegacyHomeDataMegabytesFetched;
@property(nonatomic) _Bool hasHomeDataMegabytesPushed;
@property(nonatomic) _Bool hasHomeDataMegabytesFetched;
@property(nonatomic) _Bool hasHomeZoneUploadCount;
@property(nonatomic) _Bool hasHomeManagerUploadCount;
@property(nonatomic) _Bool hasHomeZoneFetchCount;
@property(nonatomic) _Bool hasHomeManagerFetchCount;
- (int)StringAsDataSyncState:(id)arg1;	// IMP=0x00000000005042aa
- (id)dataSyncStateAsString:(int)arg1;	// IMP=0x0000000000504262
@property(nonatomic) _Bool hasDataSyncState;
@property(nonatomic) int dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(nonatomic) _Bool hasLastDecryptionFailed;
@property(nonatomic) _Bool hasHasDecryptionFailed;
@property(nonatomic) _Bool hasUploadMaximumDelayReached;
- (id)topErrorsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005040f6
- (unsigned long long)topErrorsCount;	// IMP=0x00000000005040d9
- (void)addTopErrors:(id)arg1;	// IMP=0x000000000050406f
- (void)clearTopErrors;	// IMP=0x0000000000504052
- (id)topReasonsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000504035
- (unsigned long long)topReasonsCount;	// IMP=0x0000000000504018
- (void)addTopReasons:(id)arg1;	// IMP=0x0000000000503fae
- (void)clearTopReasons;	// IMP=0x0000000000503f91
@property(nonatomic) _Bool hasUploadErrorCount;
@property(nonatomic) _Bool hasUploadCount;
@property(nonatomic) _Bool hasFetchCount;
@property(nonatomic) _Bool hasPushCount;
@property(nonatomic) _Bool hasTimestamp;

@end

