//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BAAgentConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000038d60
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)invalidate;	// IMP=0x0010000000038c4b
- (void)connectionInvalidated;	// IMP=0x0010000000038c45
- (void)_setupConnection;	// IMP=0x0010000000038a8f
- (void)resume;	// IMP=0x0010000000038a0f
- (id)initWithNSXPCConnection:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000038992

@end

