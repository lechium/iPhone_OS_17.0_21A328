//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APAttributionCapData : NSObject
{
    double _searchAdClickTimestamp;	// 8 = 0x8
    double _downloadClickTimestamp;	// 16 = 0x10
    NSString *_adMetadata;	// 24 = 0x18
    long long _attributionDownloadType;	// 32 = 0x20
    long long _clickOrigin;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001faf3
@property(nonatomic) long long clickOrigin; // @synthesize clickOrigin=_clickOrigin;
@property(nonatomic) long long attributionDownloadType; // @synthesize attributionDownloadType=_attributionDownloadType;
@property(retain, nonatomic) NSString *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(nonatomic) double downloadClickTimestamp; // @synthesize downloadClickTimestamp=_downloadClickTimestamp;
@property(nonatomic) double searchAdClickTimestamp; // @synthesize searchAdClickTimestamp=_searchAdClickTimestamp;
- (id)restoreCapDataArrayFromPlist:(id)arg1;	// IMP=0x001000000001f897
- (void)_clearCapDownloadDataProperties;	// IMP=0x001000000001f864
- (_Bool)capDataFromKeyChain:(id)arg1 adamID:(id)arg2;	// IMP=0x001000000001ebf9
- (_Bool)_loadAllDataFromKeychainForKey:(id)arg1 clickCountData:(id *)arg2 downloadData:(id *)arg3;	// IMP=0x001000000001e8c3
- (void)loadCapData:(id)arg1;	// IMP=0x001000000001e649

@end

