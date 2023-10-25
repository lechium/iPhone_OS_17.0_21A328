//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, MissingFontsDialogHandler, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FontServicesDaemon : NSObject
{
    MissingFontsDialogHandler *_missingFontsDialogHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_subscriptionSupportQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_scheduledFontDeletionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_scheduledFontDeletionTimer;	// 32 = 0x20
    NSArray *_fontEnumerationProhibitedInfo;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_mainHandlerQueue;	// 48 = 0x30
    NSDictionary *_userFontsInfo;	// 56 = 0x38
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;	// 64 = 0x40
}

+ (id)sharedDaemon;	// IMP=0x0020000000001ff7
- (void).cxx_destruct;	// IMP=0x001000000000cf5d
@property(retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // @synthesize displayLayoutMonitor=_displayLayoutMonitor;
@property(retain, nonatomic) NSDictionary *userFontsInfo; // @synthesize userFontsInfo=_userFontsInfo;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mainHandlerQueue; // @synthesize mainHandlerQueue=_mainHandlerQueue;
@property(retain) NSArray *fontEnumerationProhibitedInfo; // @synthesize fontEnumerationProhibitedInfo=_fontEnumerationProhibitedInfo;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *scheduledFontDeletionTimer; // @synthesize scheduledFontDeletionTimer=_scheduledFontDeletionTimer;
- (void)analyticsEventRequestFonts:(id)arg1 misses:(unsigned long long)arg2 suggestions:(unsigned long long)arg3 resolved:(unsigned long long)arg4;	// IMP=0x001000000000cd08
- (id)_userFontsInfoFromDisk;	// IMP=0x001000000000c9f4
- (void)run;	// IMP=0x001000000000c9eb
- (void)setupForScheduledFontDeletion;	// IMP=0x001000000000c29a
- (void)setupForXPCService;	// IMP=0x001000000000c226
- (void)synchronizeFontAssets:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b850
- (void)executeScheduledFontFilesDeletion:(id)arg1;	// IMP=0x001000000000ae37
- (void)stopFontFilesDeletionTimer;	// IMP=0x001000000000ad88
- (void)setFontFilesDeletionTimer:(unsigned int)arg1;	// IMP=0x001000000000ab9b
- (void)scheduleFontFilesDeletion:(id)arg1;	// IMP=0x001000000000a7d1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *scheduledFontDeletionQueue; // @synthesize scheduledFontDeletionQueue=_scheduledFontDeletionQueue;
- (void)resetIssuedFontsFor:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a4f7
- (void)fontChanged:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a380
- (unsigned long long)countFontAssets;	// IMP=0x001000000000a2e2
- (void)subscriptionSupportTimerHandler;	// IMP=0x00100000000094aa
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionSupportQueue; // @synthesize subscriptionSupportQueue=_subscriptionSupportQueue;
- (void)warnAboutSuspendedFontProviders:(id)arg1;	// IMP=0x00100000000090fb
- (void)updatingUserFonts:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009007
- (void)resumeAndShowAlertForSuspendedFontProviders:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008ee7
- (void)warnAboutSuspendedFontProvider:(id)arg1 forExpiration:(_Bool)arg2 date:(id)arg3 withURLSchem:(id)arg4 immediately:(_Bool)arg5;	// IMP=0x0010000000007c5b
- (void)resetWarnedForIdenntifier:(id)arg1;	// IMP=0x0010000000007b49
- (void)recordWarnedForIdenntifier:(id)arg1;	// IMP=0x0010000000007a4e
- (id)displayLayoutMonitorWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007987
- (void)recordSuspendedProvider:(id)arg1 url:(id)arg2 andScheme:(id)arg3 forDate:(id)arg4;	// IMP=0x0010000000007781
- (void)requestFonts:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007290
- (void)requestFonts:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005f9d
- (void)extractRequestFontsMissed:(unsigned long long *)arg1 andResolved:(unsigned long long *)arg2;	// IMP=0x0010000000005ecd
- (void)recordRequestFontsResultWihtMissed:(_Bool)arg1 andResolved:(_Bool)arg2;	// IMP=0x0010000000005ded
- (void)forgetClientApplication:(id)arg1;	// IMP=0x0010000000005ae1
- (id)issuedFontFilePathsForIdentifier:(id)arg1;	// IMP=0x0010000000005745
- (void)recordIssuedFontPaths:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000054cf
- (id)sanitizeIssuedFontPaths:(id)arg1;	// IMP=0x00100000000050ee
- (void)showDialog:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004e98
- (id)missingFontsDialogRequestsFromUnknownFontNames:(id)arg1;	// IMP=0x0010000000004c8a
- (id)missingFontsDialogRequestsFromDisabledFamilyNames:(id)arg1;	// IMP=0x0010000000004822
- (id)providerIdentifiersAndFamilyName:(id *)arg1 fromPostScriptName:(id)arg2;	// IMP=0x00100000000043b7
- (id)providerIdentifiersFromFamilyName:(id)arg1;	// IMP=0x001000000000419c
- (id)identifierFromFilePath:(id)arg1;	// IMP=0x0010000000004118
- (id)unknownFontNamesAndEnabledFamilyNames:(id *)arg1 andDisabledFamilyNames:(id *)arg2 fromRequests:(id)arg3;	// IMP=0x0010000000003cb8
- (_Bool)isKnownFamilyName:(id)arg1 withEnabledState:(_Bool *)arg2;	// IMP=0x0010000000003a41
- (id)knownFamilyNameFromPostScriptName:(id)arg1 withEnabledState:(_Bool *)arg2;	// IMP=0x0010000000003716
- (void)setupUserInstalledFontsFor:(CDStruct_6ad76789)arg1 withCapabilitiesFor:(CDStruct_6ad76789)arg2 hasEnumeration:(_Bool)arg3 hasFontAccess:(_Bool)arg4 isFontProvider:(_Bool)arg5 processIdentifier:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00100000000031f8
- (id)fontInfoForAuditToken:(CDStruct_6ad76789)arg1 withEnumuration:(_Bool)arg2 installation:(_Bool)arg3 identifier:(id)arg4 andFileFilters:(id)arg5 foundFontDirectoryName:(id *)arg6;	// IMP=0x0010000000002e57
- (id)sandboxExtensionForProvider:(CDStruct_6ad76789)arg1 withDirectoryName:(id)arg2;	// IMP=0x0010000000002d29
- (id)sandboxExtensionForFontAssets:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000002c2e
- (id)sandboxExtensionForEnumeration:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000002ba9
- (_Bool)isCurrentConnectionFontPicker;	// IMP=0x0010000000002ac6
- (void)capabilitiesFor:(CDStruct_6ad76789)arg1 allowEnumerate:(_Bool *)arg2 allowUserFonts:(_Bool *)arg3 allowInstallation:(_Bool *)arg4 andIdentifier:(id *)arg5;	// IMP=0x0010000000002936
- (_Bool)isIdentifierAllowedForFontEnumeration:(id)arg1;	// IMP=0x00100000000026c8
- (id)filterUserFontInfoForAuditToken:(CDStruct_6ad76789)arg1 withEnumerationCapability:(_Bool)arg2 withFilter:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002335
- (_Bool)isAuditTokenSandboxed:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000002306
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000210c
- (void)invalidateUserFonts;	// IMP=0x00100000000020f2
@property(readonly, nonatomic) _Bool isUserFontInstalled;
- (id)init;	// IMP=0x0010000000001f9f
- (void)setup;	// IMP=0x001000000001045c
- (void)setupForProfileFonts;	// IMP=0x0010000000010436
- (void)removeObsoleteFontAsset;	// IMP=0x001000000001016d
- (void)setupForMonitoringFontAssets;	// IMP=0x001000000001001b
- (void)setupForAssetNotifications;	// IMP=0x001000000000f6be
- (id)assetHandlerQueue;	// IMP=0x001000000000f667
- (void)setupForDistributedNotifications;	// IMP=0x001000000000f202
- (void)synchronizeFontProviders;	// IMP=0x001000000000f1d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
