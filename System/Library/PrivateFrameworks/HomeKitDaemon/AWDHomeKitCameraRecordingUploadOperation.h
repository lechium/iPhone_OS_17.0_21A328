//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable
{
    long long _errorCode;	// 8 = 0x8
    unsigned long long _operationStartTime;	// 16 = 0x10
    unsigned long long _retryCount;	// 24 = 0x18
    unsigned long long _runTime;	// 32 = 0x20
    unsigned long long _timestamp;	// 40 = 0x28
    unsigned long long _totalClipDuration;	// 48 = 0x30
    NSString *_clipModelUUID;	// 56 = 0x38
    NSString *_errorDomain;	// 64 = 0x40
    int _operationType;	// 72 = 0x48
    _Bool _didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;	// 76 = 0x4c
    struct {
        unsigned int errorCode:1;
        unsigned int operationStartTime:1;
        unsigned int retryCount:1;
        unsigned int runTime:1;
        unsigned int timestamp:1;
        unsigned int totalClipDuration:1;
        unsigned int operationType:1;
        unsigned int didCausePreviousClipToFinalizeBecauseMaxDurationExceeded:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000a14d77
@property(nonatomic) unsigned long long operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long runTime; // @synthesize runTime=_runTime;
@property(nonatomic) unsigned long long totalClipDuration; // @synthesize totalClipDuration=_totalClipDuration;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool didCausePreviousClipToFinalizeBecauseMaxDurationExceeded; // @synthesize didCausePreviousClipToFinalizeBecauseMaxDurationExceeded=_didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property(retain, nonatomic) NSString *clipModelUUID; // @synthesize clipModelUUID=_clipModelUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a14b68
- (unsigned long long)hash;	// IMP=0x0000000000a149f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a147ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a14643
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a144f4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a14388
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a13d8c
- (id)dictionaryRepresentation;	// IMP=0x0000000000a13a23
- (id)description;	// IMP=0x0000000000a13974
@property(nonatomic) _Bool hasOperationStartTime;
@property(readonly, nonatomic) _Bool hasErrorDomain;
- (int)StringAsOperationType:(id)arg1;	// IMP=0x0000000000a1383d
- (id)operationTypeAsString:(int)arg1;	// IMP=0x0000000000a137f2
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) _Bool hasRetryCount;
@property(nonatomic) _Bool hasRunTime;
@property(nonatomic) _Bool hasTotalClipDuration;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
@property(readonly, nonatomic) _Bool hasClipModelUUID;
@property(nonatomic) _Bool hasTimestamp;

@end

