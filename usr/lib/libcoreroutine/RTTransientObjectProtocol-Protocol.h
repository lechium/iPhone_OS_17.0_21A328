//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTTransientObject;

@protocol RTTransientObjectProtocol <NSObject>
- (void)transientObjectDidReleaseBackingObject:(RTTransientObject *)arg1;
- (void)transientObjectDidCreateBackingObject:(RTTransientObject *)arg1;
@end

