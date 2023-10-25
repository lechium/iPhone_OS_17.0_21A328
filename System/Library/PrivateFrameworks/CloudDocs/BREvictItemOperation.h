//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BROperation.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface BREvictItemOperation : BROperation
{
    struct {
        unsigned long long sectionID;
        char *function;
        int line;
    } _section;	// 56 = 0x38
    NSURL *_url;	// 80 = 0x50
    CDUnknownBlockType _evictionCompletionBlock;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000844ba
@property(copy) CDUnknownBlockType evictionCompletionBlock; // @synthesize evictionCompletionBlock=_evictionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000842c8
- (void)main;	// IMP=0x000000000008407f
- (id)description;	// IMP=0x0000000000083fbb
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000083f4d

@end
