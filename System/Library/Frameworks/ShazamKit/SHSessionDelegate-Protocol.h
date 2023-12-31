//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/NSObject-Protocol.h>

@class NSError, SHMatch, SHSession, SHSignature;

@protocol SHSessionDelegate <NSObject>

@optional
- (void)session:(SHSession *)arg1 didNotFindMatchForSignature:(SHSignature *)arg2 error:(NSError *)arg3;
- (void)session:(SHSession *)arg1 didFindMatch:(SHMatch *)arg2;
@end

