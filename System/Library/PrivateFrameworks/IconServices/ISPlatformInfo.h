//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISPlatformInfo : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0060000000036444
- (_Bool)supportsRequestingMultisizedImagesForPlatform:(unsigned long long)arg1;	// IMP=0x0000000000036506
- (_Bool)supportsRequestingLayerStacksForPlatform:(unsigned long long)arg1;	// IMP=0x00000000000364a4
@property(readonly) unsigned long long nativePlatform;

@end

