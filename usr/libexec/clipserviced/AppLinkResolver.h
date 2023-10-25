//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AppLinkResolver : NSObject
{
    NSMutableDictionary *_URLHashToMetadataMap;	// 8 = 0x8
}

+ (id)_clipIPALinksByBundleIdentifiers;	// IMP=0x002000000000242b
+ (id)_appBundleIdentifiersByURLPrefixes;	// IMP=0x00100000000023b6
- (void).cxx_destruct;	// IMP=0x0020000000002609
- (id)_hardCodedBundleIdentifierForURL:(id)arg1;	// IMP=0x0010000000002438
- (id)_bundleIdentifierForURL:(id)arg1;	// IMP=0x001000000000231e
- (_Bool)isClipForAppBundleIdentifier:(id)arg1;	// IMP=0x0010000000002281
- (void)getAppBundleIdentifierForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000215c
- (id)ipaLinkForClipBundleIdentifier:(id)arg1;	// IMP=0x0010000000001e98
- (id)appBundleIdentifierForURL:(id)arg1;	// IMP=0x0010000000001da3
- (id)metadataForURL:(id)arg1;	// IMP=0x0010000000001c3c
- (void)saveLinkWithURL:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000001ad3
- (id)init;	// IMP=0x0010000000001a85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
