//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 extraUserInfo:(id)arg8;	// IMP=0x008000000000dab3
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;	// IMP=0x008000000000da7e
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;	// IMP=0x008000000000da56
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;	// IMP=0x008000000000da2c
- (id)MCErrorType;	// IMP=0x001000000000e88c
- (id)MCUSEnglishSuggestion;	// IMP=0x001000000000e835
- (id)MCUSEnglishDescription;	// IMP=0x001000000000e7de
- (_Bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000000e69a
- (id)MCCopyAsPrimaryError;	// IMP=0x001000000000e5a0
- (id)MCFindPrimaryError;	// IMP=0x001000000000e41e
- (id)MCVerboseDescription;	// IMP=0x001000000000dfe5
@end
