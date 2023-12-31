//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession, PSUIAppDescription;

__attribute__((visibility("hidden")))
@interface PSUIAppInstallController : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    int _installState;	// 16 = 0x10
    NSString *_appID;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    PSUIAppDescription *_appDescription;	// 40 = 0x28
    NSURL *_installURL;	// 48 = 0x30
    NSURL *_moreAppsURL;	// 56 = 0x38
    CDUnknownBlockType _loadingCompletionBlock;	// 64 = 0x40
}

+ (id)tryLoadAppDescriptionFromCache;	// IMP=0x006000000003cc28
+ (void)saveAppDescriptionToCache:(id)arg1;	// IMP=0x006000000003c861
+ (id)iconLocalCacheURLFromKey:(id)arg1;	// IMP=0x006000000003c70b
+ (id)loadIconFromURL:(id)arg1 session:(id)arg2;	// IMP=0x006000000003c1ee
+ (void)lookupAppFromStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000003bd18
+ (id)lookupAppDescriptionForInstalledApp:(id)arg1;	// IMP=0x006000000003b7dc
- (void).cxx_destruct;	// IMP=0x000000000003d669
@property(copy, nonatomic) CDUnknownBlockType loadingCompletionBlock; // @synthesize loadingCompletionBlock=_loadingCompletionBlock;
@property(retain, nonatomic) NSURL *moreAppsURL; // @synthesize moreAppsURL=_moreAppsURL;
@property(retain) NSURL *installURL; // @synthesize installURL=_installURL;
@property(retain) PSUIAppDescription *appDescription; // @synthesize appDescription=_appDescription;
@property(readonly) int installState; // @synthesize installState=_installState;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)getLogger;	// IMP=0x000000000003d5b2
- (id)specifierWithAppLoadCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d380
- (void)moreAppsButtonTapped:(id)arg1;	// IMP=0x000000000003d322
- (_Bool)moreAppsAvailable;	// IMP=0x000000000003d314
- (void)installButtonTapped:(id)arg1;	// IMP=0x000000000003d06d
- (void)load;	// IMP=0x000000000003b43b
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000000003b347
- (id)initWithAppID:(id)arg1 carrierMoreAppsURL:(id)arg2;	// IMP=0x000000000003b165

@end

