//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, MISSING_TYPE, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetDetail
{
    _Bool _isFinished;	// 8 = 0x8
    _Bool _notFinished;	// 9 = 0x9
    short _taste;	// 10 = 0xa
    short _tasteSyncedToStore;	// 12 = 0xc
    float _readingProgress;	// 16 = 0x10
    float _readingProgressHighWaterMark;	// 20 = 0x14
    MISSING_TYPE *_readingPositionLocationRangeStart;	// 24 = 0x18
    int _readingPositionLocationRangeEnd;	// 28 = 0x1c
    int _readingPositionAbsolutePhysicalLocation;	// 32 = 0x20
    NSString *_assetID;	// 40 = 0x28
    NSDate *_dateFinished;	// 48 = 0x30
    NSDate *_lastOpenDate;	// 56 = 0x38
    NSString *_readingPositionCFIString;	// 64 = 0x40
    NSString *_readingPositionAnnotationVersion;	// 72 = 0x48
    NSString *_readingPositionAssetVersion;	// 80 = 0x50
    NSData *_readingPositionUserData;	// 88 = 0x58
    NSString *_readingPositionStorageUUID;	// 96 = 0x60
    NSDate *_datePlaybackTimeUpdated;	// 104 = 0x68
    double _bookmarkTime;	// 112 = 0x70
    NSDate *_readingPositionLocationUpdateDate;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000040311
- (void).cxx_destruct;	// IMP=0x0020000000040d8a
@property(copy, nonatomic) NSDate *readingPositionLocationUpdateDate; // @synthesize readingPositionLocationUpdateDate=_readingPositionLocationUpdateDate;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(copy, nonatomic) NSDate *datePlaybackTimeUpdated; // @synthesize datePlaybackTimeUpdated=_datePlaybackTimeUpdated;
@property(copy, nonatomic) NSString *readingPositionStorageUUID; // @synthesize readingPositionStorageUUID=_readingPositionStorageUUID;
@property(nonatomic) int readingPositionAbsolutePhysicalLocation; // @synthesize readingPositionAbsolutePhysicalLocation=_readingPositionAbsolutePhysicalLocation;
@property(nonatomic) int readingPositionLocationRangeEnd; // @synthesize readingPositionLocationRangeEnd=_readingPositionLocationRangeEnd;
@property(nonatomic) int readingPositionLocationRangeStart; // @synthesize readingPositionLocationRangeStart=_readingPositionLocationRangeStart;
@property(copy, nonatomic) NSData *readingPositionUserData; // @synthesize readingPositionUserData=_readingPositionUserData;
@property(copy, nonatomic) NSString *readingPositionAssetVersion; // @synthesize readingPositionAssetVersion=_readingPositionAssetVersion;
@property(copy, nonatomic) NSString *readingPositionAnnotationVersion; // @synthesize readingPositionAnnotationVersion=_readingPositionAnnotationVersion;
@property(copy, nonatomic) NSString *readingPositionCFIString; // @synthesize readingPositionCFIString=_readingPositionCFIString;
@property(nonatomic) float readingProgressHighWaterMark; // @synthesize readingProgressHighWaterMark=_readingProgressHighWaterMark;
@property(nonatomic) float readingProgress; // @synthesize readingProgress=_readingProgress;
@property(copy, nonatomic) NSDate *lastOpenDate; // @synthesize lastOpenDate=_lastOpenDate;
@property(copy, nonatomic) NSDate *dateFinished; // @synthesize dateFinished=_dateFinished;
@property(nonatomic) short tasteSyncedToStore; // @synthesize tasteSyncedToStore=_tasteSyncedToStore;
@property(nonatomic) short taste; // @synthesize taste=_taste;
@property(nonatomic) _Bool notFinished; // @synthesize notFinished=_notFinished;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) _Bool isAudiobook;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000406d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000040319
- (id)configuredRecordFromAttributes;	// IMP=0x001000000003fdda
- (id)zoneName;	// IMP=0x001000000003fcb0
- (id)identifier;	// IMP=0x001000000003fc9e
- (id)recordType;	// IMP=0x001000000003fc91
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000003f510
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000003f0da
- (id)initWithAssetID:(id)arg1;	// IMP=0x001000000003f016

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

