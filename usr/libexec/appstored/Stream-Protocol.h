//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol StreamDelegate;

@protocol Stream <NSObject>
@property(readonly) unsigned long long streamStatus;
// Error: Property attributes should begin with the type ('T') attribute, property name: streamError
// Property attributes: (null)

@property __weak id <StreamDelegate> delegate;
- (void)close;
- (void)open;
@end
