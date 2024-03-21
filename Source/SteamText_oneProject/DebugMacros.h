#pragma once



#include"DrawDebugHelpers.h"
#include"Kismet/KismetSystemLibrary.h"
//绘制持续时间为有限时间的测试图形
#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.F,6 , FColor::Blue,false , 3.f);
#define DRAW_LINE(StartLocation,EndLocation)if(GetWorld()) DrawDebugLine(GetWorld(),StartLocation,EndLocation,FColor::Black,true,-1.f,0,1.f);
#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(GetWorld() , Location,15.f,FColor::Red,true);
#define DRAW_VECTOR(StartLocation,EndLocation) \
	if(GetWorld())\
	{\
		DrawDebugLine(GetWorld(),StartLocation,EndLocation,FColor::Black,true,-1.f,0,1.f);\
		DrawDebugPoint(GetWorld() , StartLocation,15.f,FColor::Red,true);\
		DrawDebugPoint(GetWorld() , EndLocation,15.f,FColor::Red,true);\
	}
#define DRAW_ImpactPoint_SPHERE(Location)if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 8,6 , FColor::Yellow, false, 5.f);
//绘制持续时间为一帧的测试图形
#define DRAW_SPHERE_SingleFrame(Location)if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 6, FColor::Red, false, -1.f);
#define DRAW_LINE_SingleFrame(StartLocation,EndLocation)if(GetWorld()) DrawDebugLine(GetWorld(),StartLocation,EndLocation,FColor::Black,false,-1.f,0,1.f);
#define DRAW_POINT_SingleFrame(Location) if(GetWorld()) DrawDebugPoint(GetWorld() , Location,15.f,FColor::Red,false,-1.f);
#define DRAW_VECTOR_SingleFrame(StartLocation,EndLocation) \
	if(GetWorld())\
	{\
		DrawDebugLine(GetWorld(),StartLocation,EndLocation,FColor::Black,false,-1.f,0,1.f);\
		DrawDebugPoint(GetWorld() , StartLocation,15.f,FColor::Red,false,-1.f);\
		DrawDebugPoint(GetWorld() , EndLocation,15.f,FColor::Red,false,-1.f);\
	}
#define DRAW_ACTORLOCATION_TO_IMPONTPOINT_ARROW(ActorLocation,ForwardLocation,HitLocation,normalvectorLocation)\
	if(GetWorld()){\
		UKismetSystemLibrary::DrawDebugArrow(GetWorld(),ActorLocation,ActorLocation+ForwardLocation*50.f,5.f,FLinearColor::Red,true,3.f);\
		UKismetSystemLibrary::DrawDebugArrow(GetWorld(),ActorLocation,ActorLocation+HitLocation*50.f,5.f,FLinearColor::Green,true,3.f);\
		UKismetSystemLibrary::DrawDebugArrow(GetWorld(),ActorLocation,ActorLocation+normalvectorLocation*200,5.f,FLinearColor::Blue,true,3.f);\
	}
