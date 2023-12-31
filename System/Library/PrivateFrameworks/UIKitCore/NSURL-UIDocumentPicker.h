//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (UIDocumentPicker)
+ (id)ui_incomingDirectory:(_Bool)arg1;	// IMP=0x00100000006d00d6
+ (id)ui_URLFromExportBookmark:(id)arg1;	// IMP=0x00100000006cfff2
+ (id)ui_cloudDocsContainerURL;	// IMP=0x00100000006cfc9c
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00100000008fca12
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;	// IMP=0x00100000008fc46f
+ (id)mapsURLWithQuery:(id)arg1;	// IMP=0x00100000008fc378
+ (void)_setAllowsCreationOfFileURLFromItemProvider:(_Bool)arg1;	// IMP=0x0010000000ee353f
+ (_Bool)_allowsCreationOfFileURLFromItemProvider;	// IMP=0x0010000000ee3514
- (id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;	// IMP=0x00100000006d085c
- (id)ui_downloadOperationForActivity:(id)arg1 inScene:(id)arg2;	// IMP=0x00100000006d0800
- (id)ui_downloadOperationForActivity:(id)arg1;	// IMP=0x00100000006d07c8
- (id)ui_resolveOnDiskBookmarkAndPromise;	// IMP=0x00100000006d074a
- (void)ui_scheduleForCleanup;	// IMP=0x00100000006d0386
- (id)ui_bookmarkForExportWithError:(id *)arg1;	// IMP=0x00100000006cff0b
- (_Bool)ui_isContentManaged;	// IMP=0x00100000006cfc52
- (void)ui_setIsContentManaged:(_Bool)arg1;	// IMP=0x00100000006cfbf8
- (_Bool)ui_isUnfulfilledPromiseURL;	// IMP=0x00100000006cfab2
- (_Bool)ui_canOpenInPlace;	// IMP=0x00100000006cf953
- (void)ui_setIsFileProviderURL:(_Bool)arg1;	// IMP=0x00100000006cf820
- (_Bool)ui_isFileProviderURL;	// IMP=0x00100000006cf6f2
- (_Bool)ui_hasSandboxExtendedForClass:(const char *)arg1;	// IMP=0x00100000006cf685
- (_Bool)ui_hasReadSandboxExtended;	// IMP=0x00100000006cf669
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;	// IMP=0x00100000006cf473
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;	// IMP=0x00100000006cf454
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;	// IMP=0x00100000006cf435
- (_Bool)isHTTPOrHTTPSURL;	// IMP=0x00100000008fceae
- (_Bool)isJavaScriptURL;	// IMP=0x00100000008fce56
- (_Bool)isAccountURL;	// IMP=0x00100000008fcdf9
- (_Bool)isWebcalURL;	// IMP=0x00100000008fcce9
- (_Bool)isSpringboardHandledURL;	// IMP=0x00100000008fcc84
- (id)searchResultIdentifier;	// IMP=0x00100000008fcb8f
- (id)searchResultDomain;	// IMP=0x00100000008fca8e
- (id)radarWebURL;	// IMP=0x00100000008fc878
- (id)phobosURL;	// IMP=0x00100000008fc814
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;	// IMP=0x00100000008fc65d
- (_Bool)isInternalUIKitURL;	// IMP=0x00100000008fd240
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;	// IMP=0x0010000000ee3676
- (id)_NSItemProviderArchive_customArchiveDictionary;	// IMP=0x0010000000ee35cf
@property(copy, nonatomic, setter=_setTitle:) NSString *_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end

