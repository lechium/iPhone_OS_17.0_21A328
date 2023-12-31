//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PRSExternalSystemService, PRSService;

__attribute__((visibility("hidden")))
@interface MDMWallpaperUtilities : NSObject
{
    PRSService *_posterService;	// 8 = 0x8
    PRSExternalSystemService *_externalPosterService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003b3a
@property(retain, nonatomic) PRSExternalSystemService *externalPosterService; // @synthesize externalPosterService=_externalPosterService;
@property(retain, nonatomic) PRSService *posterService; // @synthesize posterService=_posterService;
- (void)_removeImageFromURL:(id)arg1;	// IMP=0x0000000000003a11
- (id)_storeImageToTempDirectory:(id)arg1;	// IMP=0x0000000000003895
- (void)_setWallpaper:(id)arg1 forConfigurationWithUUID:(id)arg2 setLockScreen:(_Bool)arg3 setHomeScreen:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000311c
- (void)_verifyWallpaperConfigExistsWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002eae
- (void)_createNewConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002b47
- (void)_createNewConfigurationIfNeeedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000028f0
- (void)setWallpaper:(id)arg1 forLockScreen:(_Bool)arg2 homeScreen:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000002564

@end

