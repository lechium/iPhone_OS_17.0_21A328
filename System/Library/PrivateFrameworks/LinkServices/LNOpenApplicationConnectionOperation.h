//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LNOpenApplicationConnectionOperation
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005d2c6
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000005d1e5
- (void)finishWithActionResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000000005d107
- (id)initWithPriority:(long long)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cfa4

@end

