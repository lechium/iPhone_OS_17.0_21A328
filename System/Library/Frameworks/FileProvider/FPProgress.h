//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class NSOperation;

__attribute__((visibility("hidden")))
@interface FPProgress : NSProgress
{
    NSOperation *_operation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e339e
- (void)cancel;	// IMP=0x00000000000e3352
- (id)initWithOperation:(id)arg1;	// IMP=0x00000000000e3269

@end

