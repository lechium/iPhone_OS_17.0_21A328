//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPCommentQuestion;

@interface RAPUserResponseQuestion
{
    NSString *_responseID;	// 8 = 0x8
    NSString *_reportID;	// 16 = 0x10
    _Bool _isAnonymous;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000039535e
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x0010000000395222
- (_Bool)isAnonymous;	// IMP=0x0010000000395212
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 responseID:(id)arg3 reportID:(id)arg4 isAnonymous:(_Bool)arg5;	// IMP=0x0010000000395145

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
