//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FeedbackSubmissionPostAction : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSString *_communityIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001bd695
- (void).cxx_destruct;	// IMP=0x00200000001bd6d7
@property(copy, nonatomic) NSString *communityIdentifier; // @synthesize communityIdentifier=_communityIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)performActionWithFeedbackResponse:(id)arg1 feedbackRequest:(id)arg2;	// IMP=0x00100000001bd69d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001bd5e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001bd4d4

@end

