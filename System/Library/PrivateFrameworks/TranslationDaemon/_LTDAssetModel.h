//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _LTAssetProgress;
@protocol _LTDAssetModelProtocol;

__attribute__((visibility("hidden")))
@interface _LTDAssetModel : NSObject
{
    NSArray *_localeIdentifiers;	// 8 = 0x8
    NSObject<_LTDAssetModelProtocol> *_provider;	// 16 = 0x10
}

+ (id)localeIdentifiersForLanguageName:(id)arg1;	// IMP=0x001000000000998c
+ (id)descriptionForAssetState:(unsigned long long)arg1;	// IMP=0x0010000000008f86
- (void).cxx_destruct;	// IMP=0x000000000000a437
@property(retain, nonatomic) NSObject<_LTDAssetModelProtocol> *provider; // @synthesize provider=_provider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)localeIdentifiers;	// IMP=0x0000000000009daf
- (_Bool)_isCompatibleWithThisDevice;	// IMP=0x00000000000098a7
- (_Bool)isNewerCompatibleVersionThan:(id)arg1;	// IMP=0x0000000000009851
- (_Bool)isNewerVersionThan:(id)arg1;	// IMP=0x00000000000097dc
- (long long)compareAssetVersionReversed:(id)arg1;	// IMP=0x0000000000009732
- (_Bool)supportsLocale:(id)arg1;	// IMP=0x0000000000009640
- (_Bool)canBePurged;	// IMP=0x000000000000962a
- (_Bool)isInstalled;	// IMP=0x0000000000009614
- (_Bool)isDownloading;	// IMP=0x00000000000095fe
- (_Bool)isAvailable;	// IMP=0x00000000000095e8
- (_Bool)refreshState;	// IMP=0x00000000000095af
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000930f
- (id)status;	// IMP=0x0000000000009282
- (id)stateDescription;	// IMP=0x0000000000009246
- (_Bool)isTTSModel;	// IMP=0x000000000000922c
- (_Bool)isPhrasebook;	// IMP=0x0000000000009212
- (_Bool)isMTModel;	// IMP=0x00000000000091f8
- (_Bool)isEmpty;	// IMP=0x00000000000091de
- (_Bool)isConfig;	// IMP=0x00000000000091c4
- (_Bool)isASRModel;	// IMP=0x00000000000091aa
- (_Bool)isANEModel;	// IMP=0x0000000000009191
@property(readonly, nonatomic) _Bool isMultiLocaleAsset;
@property(readonly, nonatomic) _Bool shouldPurgeWithLocale;
- (unsigned long long)assetType;	// IMP=0x000000000000911b
- (long long)unarchivedSize;	// IMP=0x0000000000009105
- (id)supportedLanguages;	// IMP=0x00000000000090ef
- (unsigned long long)state;	// IMP=0x00000000000090d9
- (long long)requiredCapabilityIdentifier;	// IMP=0x00000000000090c3
- (id)managedAssetType;	// IMP=0x00000000000090ad
- (_Bool)isPremiumTextLID;	// IMP=0x0000000000009097
- (id)getLocalFileUrl;	// IMP=0x0000000000009081
- (long long)formatVersion;	// IMP=0x000000000000906b
- (long long)downloadSize;	// IMP=0x0000000000009055
- (long long)contentVersion;	// IMP=0x000000000000903f
- (long long)assetVersion;	// IMP=0x0000000000009029
- (id)assetTypeName;	// IMP=0x0000000000009013
- (id)assetName;	// IMP=0x0000000000008ffd
- (id)assetLanguage;	// IMP=0x0000000000008fe7
- (id)assetId;	// IMP=0x0000000000008fd1
@property(readonly, nonatomic) _LTAssetProgress *progress;
- (id)identifier;	// IMP=0x0000000000008fa5
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000008ed4

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

