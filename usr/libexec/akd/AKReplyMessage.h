//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSString;

@interface AKReplyMessage
{
}

- (id)description;	// IMP=0x002000000003266e
@property(copy, nonatomic) NSData *returnData;
@property(copy, nonatomic) NSError *error;
@property(nonatomic) _Bool didSucceed;
@property(copy, nonatomic) NSString *replyToID;
- (id)init;	// IMP=0x0010000000032360

@end
