//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLCIKernelLoader : NSObject
{
}

+ (id)p_loadLegacyKernelWithName:(id)arg1;	// IMP=0x004000000059bd38
+ (id)p_loadMetalKernelWithName:(id)arg1;	// IMP=0x001000000059b146
+ (id)loadKernelWithMetalName:(id)arg1 legacyName:(id)arg2;	// IMP=0x001000000059ac85

@end
