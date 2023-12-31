//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;
@protocol OS_dispatch_queue;

@interface ADSyncConfigAssetManager : NSObject
{
    TRIClient *_client;	// 8 = 0x8
    _Bool _consumeSiriVocabularyNotificationForAddressBookSync;	// 16 = 0x10
    _Bool _isMediaEntitySyncDisabled;	// 17 = 0x11
    _Bool _disableDictationOnlySync;	// 18 = 0x12
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _updateHandler;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000002e26ca
- (void).cxx_destruct;	// IMP=0x00200000002e2554
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool disableDictationOnlySync; // @synthesize disableDictationOnlySync=_disableDictationOnlySync;
@property(nonatomic) _Bool isMediaEntitySyncDisabled; // @synthesize isMediaEntitySyncDisabled=_isMediaEntitySyncDisabled;
@property(nonatomic) _Bool consumeSiriVocabularyNotificationForAddressBookSync; // @synthesize consumeSiriVocabularyNotificationForAddressBookSync=_consumeSiriVocabularyNotificationForAddressBookSync;
- (_Bool)dictationOnlySyncDisabled;	// IMP=0x00100000002e2465
- (_Bool)siriVocabularyNotificationForAddressBookSyncEnabled;	// IMP=0x00100000002e2349
- (_Bool)_getConfigValueForFactor:(id)arg1;	// IMP=0x00100000002e2245
- (void)_populateConfiguration;	// IMP=0x00100000002e1f83
- (void)_registerUpdateHandler;	// IMP=0x00100000002e1db8
- (id)_initWithTriClient:(id)arg1;	// IMP=0x00100000002e1c9a
- (id)init;	// IMP=0x00100000002e1c3b

@end

