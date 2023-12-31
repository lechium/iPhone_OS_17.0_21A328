//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface SRSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x00400000000662fc
+ (id)_defaultURL;	// IMP=0x001000000006624a
- (void).cxx_destruct;	// IMP=0x00200000000679e7
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void)_save;	// IMP=0x0010000000067795
- (void)_load;	// IMP=0x0010000000067459
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x0010000000067232
- (id)_propertyListRepresentation;	// IMP=0x00100000000670c2
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x0010000000066fac
- (void)preloadPluginBundles;	// IMP=0x0010000000066eea
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x0010000000066ded
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x0010000000066d5f
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x0010000000066c85
- (void)_rescanBundles;	// IMP=0x00100000000667f3
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x00100000000666e6
- (id)_carPlayPresentationClassString;	// IMP=0x00100000000666b6
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x00100000000664d4
- (id)init;	// IMP=0x0010000000066479
- (id)initWithURL:(id)arg1;	// IMP=0x00100000000663d2

@end

