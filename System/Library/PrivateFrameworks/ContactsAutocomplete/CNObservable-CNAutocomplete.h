//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNObservable.h>

@interface CNObservable (CNAutocomplete)
- (id)networkObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;	// IMP=0x0070000000014d54
- (id)localObservableWithScheduler:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;	// IMP=0x0070000000014d31
- (id)localObservableWithScheduler:(id)arg1;	// IMP=0x0070000000014d1d
- (id)activityIndicatingObservableWithActivityDidStartHandler:(CDUnknownBlockType)arg1 activityDidStopHandler:(CDUnknownBlockType)arg2;	// IMP=0x0070000000014c69
- (id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(CDUnknownBlockType)arg2 scheduler:(id)arg3;	// IMP=0x0070000000014917
@end

