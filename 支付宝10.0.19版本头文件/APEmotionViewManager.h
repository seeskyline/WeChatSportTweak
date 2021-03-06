//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface APEmotionViewManager : NSObject
{
    long long _baseEmotionCountPerPage;
    NSMutableArray *_builtInfavoriteEmotions;
    NSMutableArray *_builtInfavoriteEmotionsVoiceOver;
}

+ (double)emotionBoardViewHeight;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *builtInfavoriteEmotionsVoiceOver; // @synthesize builtInfavoriteEmotionsVoiceOver=_builtInfavoriteEmotionsVoiceOver;
@property(retain, nonatomic) NSMutableArray *builtInfavoriteEmotions; // @synthesize builtInfavoriteEmotions=_builtInfavoriteEmotions;
@property(nonatomic) long long baseEmotionCountPerPage; // @synthesize baseEmotionCountPerPage=_baseEmotionCountPerPage;
- (void).cxx_destruct;
- (struct EmotionParam)getEmotionParam:(int)arg1;
- (int)getEmotionType:(_Bool)arg1 isFavEmotion:(_Bool)arg2;
- (id)builtInFavEmotions;
- (struct CGSize)getMarginSize:(int)arg1;
- (struct CGSize)getImageShowSize:(int)arg1;
- (struct CGSize)getImageSpaceSize:(int)arg1;
- (id)createPackagePageView:(id)arg1 pageIndex:(long long)arg2;
- (long long)getPageCounts:(id)arg1;
- (struct CGRect)getEmotionShowRect:(long long)arg1 type:(int)arg2;
- (long long)getEmotionIndex:(struct CGPoint)arg1 pageIndex:(long long)arg2 emotionCount:(long long)arg3 type:(int)arg4;
- (long long)initBaseEmotionCountPerPage;
- (void)initBuiltInFavoriteEmotions;

@end

