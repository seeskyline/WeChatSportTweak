//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPGroupPayeeFormViewHeaderFooterViewModel : NSObject
{
    _Bool _rightAlignment;
    _Bool _hasAssistInfo;
    _Bool _hidden;
    long long _headerFooterType;
    NSString *_assitInfo;
    NSString *_viewTitle;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) NSString *assitInfo; // @synthesize assitInfo=_assitInfo;
@property(nonatomic) _Bool hasAssistInfo; // @synthesize hasAssistInfo=_hasAssistInfo;
@property(nonatomic) _Bool rightAlignment; // @synthesize rightAlignment=_rightAlignment;
@property(nonatomic) long long headerFooterType; // @synthesize headerFooterType=_headerFooterType;
- (void).cxx_destruct;

@end

