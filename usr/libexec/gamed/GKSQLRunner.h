//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection;

@interface GKSQLRunner : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)runnerWithConnection:(id)arg1;	// IMP=0x0040000000114604
- (void).cxx_destruct;	// IMP=0x002000000011486a
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (int)runSQL:(id)arg1;	// IMP=0x0010000000114719
- (int)runSQLFromFileAtPath:(id)arg1;	// IMP=0x00100000001146b9
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000114651

@end

