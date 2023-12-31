//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol HMDFetchedSettingsDriver;

__attribute__((visibility("hidden")))
@interface HMDFetchedAccessorySettingsControllerKeyPathMapItem : NSObject
{
    id <HMDFetchedSettingsDriver> _driver;	// 8 = 0x8
    NSMutableArray *_keyPathsInternal;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005f4ed5
@property(readonly) id <HMDFetchedSettingsDriver> driver; // @synthesize driver=_driver;
@property(readonly) NSArray *keyPaths;
- (id)initWithDriver:(id)arg1 keyPaths:(id)arg2;	// IMP=0x00000000005f4de1

@end

