//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol GDTopicViewProtocol
@property(readonly, nonatomic) NSString *databaseFilePath;
- (void)enumerateTopicsWithBlock:(void (^)(GDTopicViewTopic *, _Bool *))arg1;
@end
