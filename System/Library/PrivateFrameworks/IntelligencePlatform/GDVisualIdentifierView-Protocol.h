//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GDVisualIdentifierViewPerson, NSString;

@protocol GDVisualIdentifierView
- (void)enumeratePeopleMatchingName:(NSString *)arg1 block:(void (^)(GDVisualIdentifierViewPerson *, _Bool *))arg2;
- (GDVisualIdentifierViewPerson *)personForIdentifier:(NSString *)arg1;
- (void)enumeratePeopleWithBlock:(void (^)(GDVisualIdentifierViewPerson *, _Bool *))arg1;
@end

