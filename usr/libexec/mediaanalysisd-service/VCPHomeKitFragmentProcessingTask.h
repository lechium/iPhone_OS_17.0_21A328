//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMIVideoAnalyzer, NSData, NSDictionary;

@interface VCPHomeKitFragmentProcessingTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSData *_assetData;	// 16 = 0x10
    HMIVideoAnalyzer *_analyzer;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

+ (id)taskForAssetData:(id)arg1 withAnalyzer:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x002000000001c0cd
- (void).cxx_destruct;	// IMP=0x002000000001c92c
- (_Bool)autoCancellable;	// IMP=0x001000000001c924
- (int)run;	// IMP=0x001000000001c374
- (void)cancel;	// IMP=0x001000000001c369
- (float)resourceRequirement;	// IMP=0x001000000001c35b
- (void)dealloc;	// IMP=0x001000000001c1bd
- (id)initWithAssetData:(id)arg1 analyzer:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001bf8e
- (id)init;	// IMP=0x001000000001bf80

@end

