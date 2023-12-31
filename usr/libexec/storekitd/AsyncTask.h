//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AsyncTask
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
}

- (_Bool)isFinished;	// IMP=0x002000000009b9a1
- (_Bool)isExecuting;	// IMP=0x001000000009b98f
- (void)completeWithSuccess;	// IMP=0x001000000009b932
- (void)completeWithError:(id)arg1;	// IMP=0x001000000009b8d5
- (void)start;	// IMP=0x001000000009b8a2
- (void)setFinished:(_Bool)arg1;	// IMP=0x001000000009b833
- (void)setExecuting:(_Bool)arg1;	// IMP=0x001000000009b7c4
- (_Bool)isAsynchronous;	// IMP=0x001000000009b7bc

@end

